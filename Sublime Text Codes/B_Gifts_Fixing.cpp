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
    long long tt=1;
    cin >> tt;
    long long T = tt;
    while(tt--)
    {
        //write your code here
        long long n;
        cin >> n;
        long long a[n+5],b[n+5];
        long long mnA=INT32_MAX,mnB= INT32_MAX;
        for(long long i=0;i<n;i++)
        {
            cin >> a[i];
            mnA = min(mnA,a[i]);
        }
        for(long long i=0;i<n;i++)
        {
            cin >> b[i];
            mnB = min(mnB,b[i]);
        }
        long long cnt = 0;
        for(long long i=0;i<n;i++)
        {
            long long x = a[i]-mnA;
            long long y = b[i]-mnB;
            long long res = min(x,y);
            cnt+= res;
            x-=res;
            y-=res;
            cnt+= x + y;
        }
        cout << cnt << endl;
        
    }
    return 0;
}