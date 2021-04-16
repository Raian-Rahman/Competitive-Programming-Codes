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
#define testPrint(n) cout << "test" << n << endl;


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
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char,int>mp;
        for(char i='a';i<='z';i++)  mp[i]=INT_MAX;
        string  dig;
        cin >> dig;
        for(int i=0;i<n;i++)
        {
            char x = s[i];
            mp[x] = min(mp[x],(dig[i]-48));
        }
        int cost = 0;
        string t;
        cin >> t;
        int f=0;
        for(int i=0;i<m and !f;i++)
        {
            char x =    t[i];
            if(mp[x]==INT_MAX)  f=1;
            else 
            {
                cost+=mp[x];
            } 
        }
        if(!f)  cout << cost << endl;
        else    cout << -1 << endl;
    }
    return 0;
}


