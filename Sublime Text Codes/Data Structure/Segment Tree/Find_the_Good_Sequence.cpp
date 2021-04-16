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
    //cin >> tt;
    long long T = tt;
    while(tt--)
    {
        //write your code here
        int n;
        cin >> n;
        int arr[n+5];
        for(int i=0;i<n;i++)        cin >> arr[i];
        int cum[n+5];
        cum[n-1] = 0;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i+1]-arr[i]>=2) 
            {
                cum[i] = cum[i+1]+1;
            }
            else                        cum[i] = 0;

        }
        for(int i=0;i<n;i++)    
        {
            if(cum[i]==0)   cout << 0 << endl;
            else            cout << cum[i]+1 << endl;
        }
    }
    
    return 0;
}