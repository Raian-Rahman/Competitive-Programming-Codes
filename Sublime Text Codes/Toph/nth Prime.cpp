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

long long mx = 10000077;
long long vis[10000077];
std::vector<long long> primes;

void sieve()
{
	memset(vis,0,sizeof(vis));
	vis[1]=1;
	for(long long i = 4;i<=10000007;i+=2)
	{
		vis[i]=1;
	}
	for(long long i=3;i<=10000007;i+=2)
	{
		if(!vis[i])
		{
			for(long long j=i*i;j<=10000007;j+=i)
			{
				vis[j]=1;
			}
		}
	}
	for(long long i=2;i<=10000007;i++)	if(!vis[i])	primes.push_back(i);
	//for(long long i=2;i<=10;i++)	cout << primes[i] << endl;
		
	//cout << primes.size() << endl;
}

int main()
{
    O_O;
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long t=1;
    //cin >> t;
    long long T = t;
    while(t--)
    {
    	sieve();
    	long long n;
    	cin >> n;
    	cout << primes[n-1] << endl;
        //write your code here
    }
    return 0;
}


