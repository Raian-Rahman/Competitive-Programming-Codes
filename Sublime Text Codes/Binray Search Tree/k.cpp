//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << ":" << endl
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

    cin.ignore();
    while(t--)
    {
        //write your code here
        int n,q;
        cin >> n >> q;
        std::vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        CASE_(T-t);
        while(q--)
        {
            int x,y;
            cin >> x >> y;
            v[x]=y;
            if(x<v.size()-1)
            {
                if(v[x]==v[x+1])    v.erase(v.begin()+x+1);
            }
            if(x>0)
            {
                if(v[x]==v[x-1])    v.erase(v.begin()+x-1);

            }
            
            cout << v.size() << endl;
        }

    }
    return 0;
}


