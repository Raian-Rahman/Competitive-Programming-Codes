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
        int n;
        cin >> n;
        int arr[n+5];
        int mx = -1;
        for(int i=0;i<n;i++)
        {
             cin >> arr[i];
             mx = max(mx,arr[i]);
        }
        vector<string>s(n+1);
        for(int i=0;i<n+1;i++)
        {
             for(int i=0;i<mx+10;i++) s[i].push_back('a');
        }
        for(int i=0;i<=n;i++)
        {
             for(int j=0;j<arr[i];j++)
             {
                  s[i+1][j] = s[i][j];
             }
             for(int j=arr[i];j<s[i].size();j++)
             {
                  if(s[i][j]=='a')
                    s[i+1][j]='b';
                  else 
                  {
                       s[i+1][j]='a';
                  }
             }
        }
        for(int i=0;i<=n;i++) cout << s[i] << endl;
    }
    return 0;
}