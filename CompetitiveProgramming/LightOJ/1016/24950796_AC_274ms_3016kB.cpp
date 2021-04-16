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
int main()
{
    O_O;
    long long t;
    cin >> t;
    long long T=t;
    while(t--)
    {
        long long n,w;
        cin >> n >> w;
        map<long long,long long>mp;
        map<long long,long long>vis;
        long long mn = LONG_MAX;
        vector<long long>v;
        for(int i=0;i<n;i++)
        {
            long long x,y;
            cin >> x >> y;
            if(mp[y]==0)
                v.push_back(y);
            mp[y]++;
        }
        sort(v.begin(),v.end());
        int cur = v[0];
        int cnt = 1;
        for(int i=1;i<v.size();i++)
        {
             if(cur+w>=v[i])    continue;
             else
             {
                 cur = v[i];
                 cnt++;
             }
        }
        CASE(T-t);
        cout << cnt << endl;
    }
    return 0;
}

