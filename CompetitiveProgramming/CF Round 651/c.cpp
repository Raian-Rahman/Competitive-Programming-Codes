//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;

#define inf 1000000
vector<long long>primes;
long long vis[inf+700];

void sieve()
{
    memset(vis,0,sizeof(vis));
    vis[0]=1;
    vis[1]=1;
    for(long long i=4; i<=inf; i+=2)
        vis[i]=1;
    for(long long i=3; i*i<=inf; i+=2)
    {
        if(!vis[i])
        {
            for(long long j=i*i; j<=inf; j+=i)
                vis[j]=1;
        }
    }
    for(long long i=0; i<=inf; i++)
        if(!vis[i])
            primes.push_back(i);
}


long long div(long long n)
{
    long long ev=0,od=0;
    while(n%primes[0]==0)
    {
        ev++;
        n/=primes[0];
    }
    for(long long i=1; i<primes.size() and primes[i]*primes[i]<=n; i++)
    {

        while(primes[i]%2==1 and n%primes[i]==0)
        {
            od++;
            n/=primes[i];
        }
    }
    if(n!=1)    od++;
    if(ev>1 and od>0)
        return 1;
    else if(ev==1 and od>=2)    return 1;
    else
        return 0;
}

int main()
{
    O_O;
    sieve();
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        long long n;
        cin >> n;
        if(n==1)
            cout << "FastestFinger\n";
        else if(n==2)
            cout << "Ashishgup\n";
        else
        {
            long long cur =0;
            if(n%2==0)
            {
                long long flag = div(n);
                if(!flag)
                    cout << "FastestFinger\n";
                else if(flag)
                    cout << "Ashishgup\n";
            }
            else
            {
                cout << "Ashishgup\n";
            }
        }
    }
    return 0;
}



