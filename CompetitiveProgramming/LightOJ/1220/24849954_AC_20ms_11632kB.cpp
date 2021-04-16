//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#define O_o ios_base::sync_with_stdio(0)
#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define o_O ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define fixedprecision(n) cout<<fixed<<setprecision(n)
#define endl '\n'
#define CASE(n) cout << "Case " << n << ": "
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl

vector<long long>prime;
long long flag[1000007];
void sieve()
{
    memset(flag,0,sizeof(flag));
    flag[1]=1;
    for(long long i=4;i<=1000000;i+=2)    flag[i]=1;
    for(long long i=3;i*i<=1000000;i+=2)
    {
        if(flag[i]==0)
        {
            for(long long j=i*i;j<=1000000;j+=i) flag[j]=1;
        }
    }
    for(long long  i=1;i<1000000;i++)
    {
        if(flag[i]==0)  prime.push_back(i);
    }
}

int main()
{
    O_o;
    sieve();
    //for(long long i=0;i<100;i++)  cout << prime[i] << ' ';
    //cout << endl;
    long long t;
    cin >> t;
    long long T=t;
    while(t--)
    {
        long long x;
        cin >> x;
        long long neg = 0;
        if(x<0) neg = 1;
        x= abs(x);
        long long ans =0;
        for(long long i=0;prime[i]*prime[i]<=x and i<prime.size();i++)
        {
            long long cnt =0;
            while(x%prime[i]==0)
            {
                cnt++;
                x/=prime[i];
            }
            if(ans==0)  ans =cnt;
            else        ans = __gcd(ans,cnt);
        }

        if(x>1) ans =1;
        if(neg)
        {
            while(ans%2==0) ans/=2;
        }
        CASE(T-t);
        cout << ans << endl;
    }
    return 0;
}

