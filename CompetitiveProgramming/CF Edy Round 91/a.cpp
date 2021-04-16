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
    while(t--)
    {
        //write your code here
        int n;
        cin >> n; 
        int arr[n+5];
        for(int i=1;i<=n;i++)	cin >> arr[i];
        int f = 0;
        for(int i=1;i<=n-1 and !f;i++)
        {
        	int f1=-1,f2=-1;
        	for(int j=1;j<i;j++)
        	{
        		if(arr[j]<arr[i])	
        		{
        			f1 = j;
        			break;
        		}
        	}
        	for(int j=i+1;j<=n;j++)
        	{
        		if(arr[j]<arr[i])	
        		{
        			f2 = j;
        			break;
        		}	
        	}
        	if(f1!=-1 and f2!=-1)
        	{
        		cout << "YES\n";
        		cout << f1 << ' ' << i << ' ' << f2 << endl;
        		f=1;
        	}
        }
        if(!f)	cout << "NO\n";
    }
    return 0;
}


	