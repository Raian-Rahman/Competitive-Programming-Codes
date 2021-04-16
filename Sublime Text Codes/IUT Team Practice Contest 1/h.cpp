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
#define testPrlong long(n) cout << "test" << n << endl;


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
        long long n;
        cin >> n;
        map<long long,long long>mp,mp2;
        std::vector<pair<long long,long long>> v;
        for(long long i=0;i<n;i++)    
        {
            long long x,y;
            cin >> x >> y;
            v.push_back({x,y});
            mp[x]++;
            mp2[y]++;
        }
        long long cnt=0;
        //cout << mp[2] << mp2[1] << endl;
        for(long long i=0;i<n;i++)
        {
            long long x = v[i].first;
            long long y = v[i].second;
            if(mp[x]>=2 and mp2[y]>=2)
            {
                cnt+= (mp[x]-1)*(mp2[y]-1);
               // mp[x]--;
               // mp2[y]--;
            }    
        }
        cout << cnt << endl;
      
    }
    return 0;
}


