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
        map<int,int>mp;
        set<pair<int,int>>st;
        int x;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            mp[x]++;
        }
        for(auto it:mp)
        {
            st.insert({-it.second,it.first});
        }
        int q;
        cin >> q;
        while(q--)
        {
            char ch;
            int value;
            cin >> ch >> value;
            if(ch=='+')
            {   
                st.erase({-mp[value],value});
                mp[value]++;
                st.insert({-mp[value],value});
            }
            else
            {
                
                st.erase({-mp[value],value});
                mp[value]--;
                st.insert({-mp[value],value});
            }
            int f = 0,paise=0;
            int cnt = 0;
            for(auto it:st)
            {
                if(cnt==3)  break;
                cnt++;
                int p = abs(it.first);
                paise+= p/2;
                if(paise>=4)    f=1;
            }
            if(f==1)    cout << "YES\n";
            else        cout << "NO\n";
        }
    }
    return 0;
}