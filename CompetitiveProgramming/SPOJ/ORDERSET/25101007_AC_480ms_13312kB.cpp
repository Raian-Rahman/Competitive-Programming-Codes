//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
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
    while(t--)
    {
        long long n;
        cin >> n;
        for(long long i=0;i<n;i++)
        {
            char x;
            long long p;
            cin >> x >> p;
            if(x=='I')
            {
                o_set.insert(p);
            }
            else if(x=='D')
            {
                o_set.erase(p);
            }
            else if(x=='K')
            {
                if(o_set.size()>=p)
                {
                    cout << *(o_set.find_by_order(p-1)) << endl;
                }
                else cout << "invalid\n";
            }
            else if(x=='C')
            {
                cout << o_set.order_of_key(p) <<endl;
            }
            //cout << o_set.size() << endl;
        }
    }
    return 0;
}
