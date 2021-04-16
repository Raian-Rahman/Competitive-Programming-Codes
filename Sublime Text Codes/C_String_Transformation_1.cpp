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
        string s1,s2;
        cin >> s1 >> s2;
        map<char,set<char>>mp;
        int flag = 1;
        for(int i;i<n;i++)
        {
             cout << "int\n";
             if(s1[i]==s2[i]) continue;
             if(s1[i]>s2[i])  
             {
                  flag = -1;
                  cout << "baad\n";
             }
             else if(s1[i]<s2[i])
             {
                  mp[s2[i]].insert(s1[i]);
                  cout << "dhukse\n";
             }
        }
        int sum = 0;
        for(char i = 'a';i<='t';i++)
        {
             sum+=mp[i].size();
        }
        if(flag==-1)     cout << -1 << endl;
        else             cout << sum << endl;
    }
    return 0;
}