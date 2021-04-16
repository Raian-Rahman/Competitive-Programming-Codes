//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;


#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define MOD 1000000007

inline void normal(long long &a) { a %= MOD; (a < 0) && (a += MOD); }
inline long long modMul(long long a, long long b) { normal(a), normal(b); return (a*b)%MOD; }
inline long long modAdd(long long a, long long b) { normal(a), normal(b); return (a+b)%MOD; }
inline long long modSub(long long a, long long b) { normal(a), normal(b); a -= b; normal(a); return a; }
inline long long modPow(long long b, long long p) { long long r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline long long modInverse(long long a) { return modPow(a, MOD-2); }
inline long long modDiv(long long a, long long b) { return modMul(a, modInverse(b)); }


#define inf 1000000
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
    for(long long i=0;i<primes.size() and primes[i]*primes[i]<=num and num;i++)
    {
    	if(num%primes[i]==0)	return primes[i];
    }
    return num;
}


int main()
{
    O_O;
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long t=1;
    cin >> t;
    long long T = t;
    sieve();
    while(t--)
    {
        //write your code here
        long long n;
        cin >> n;
        long long res = primeDivisor(n);
        cout << n/res << ' ' << (n/res)*(res-1) << endl;
    }
    return 0;
}


