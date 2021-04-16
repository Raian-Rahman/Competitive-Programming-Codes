//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<int, int>, null_type,less<pair<int, int> >, rb_tree_tag,tree_order_statistics_node_update>
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
    long long t=1;
    //cin >> t;
    long long T=t;
    ordered_set o_set;
    long long cur=0;
    map<long long,long long>mp;
    while(cin >> t)
    {
        mp[t]++;
        o_set.insert({t,mp[t]});
        if(cur%2==1)
        {
            pair<long long,long long>x,y;
            x =*(o_set.find_by_order(cur/2));
            y = *(o_set.find_by_order((cur/2) +1));
            cout << (x.first+y.first)/2 << endl;
        }
        else
        {
            pair<long long,long long> x = *(o_set.find_by_order(cur/2));
            cout << x.first << endl;
        }
        cur++;
    }
    return 0;
}

