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


#define inf 1299709
vector<long long>primes;
long long vis[inf+700];

void sieve()
{
    memset(vis,0,sizeof(vis));
    vis[0]=1;
    vis[1]=1;
    for(long long i=4;i<=inf;i+=2)    vis[i]=1;
    for(long long i=3;i*i<=inf;i+=2)
    {
        if(!vis[i])
        {
            for(long long j=i*i;j<=inf;j+=i)  vis[j]=1;
        }
    }
    for(long long i=0;i<=inf;i++) if(!vis[i]) primes.push_back(i);
}

long long primeDivisor(long long num)
{
    long long cur=0;
    long long res=1;
    long long Num=num;
    //cout << num << endl;
    for(long long i=0;i<primes.size() and primes[i]<=num and num;i++)
    {
        long long cnt=0;
     //   cout << i << endl;
        while(num%primes[i]==0)
        {
      //      cout << primes[i] << ' ' << num <<  endl;
            num/=primes[i];
            cnt++;
            if(num==0 or num==1)    break;
        }
        res*=(cnt+1);
    }
    if(num!=1)  res*=2;
    return res;
}

long long reverseNumber(long long number)
{
    long long temp = 0;
    while(number)
    {
        temp*=10;
        temp+=number%10;
        number/=10;
    }
    //cout << temp << endl;
    return temp;
}

long long isPrime(long long number)
{
    if(vis[number]) return 0;
    else            return 1;
}

int main()
{
    sieve();
    long long t=1;
    //scanf("%lld",&t);
    long long T = t;
    long long num;

    while(scanf("%lld",&num))
    {
        if(num==0)  break;
        //write your code here
        if(isPrime(num))    cout << 0 << endl;
        else
        {
            int p = upper_bound(primes.begin(),primes.end(),num)-primes.begin();
            cout << primes[p]-primes[p-1] << endl;
        }
    }
    return 0;
}



