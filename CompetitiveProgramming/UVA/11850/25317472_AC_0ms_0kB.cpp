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
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;


int main()
{
    O_O;
    long long t=1;
    //cin >> t;
    long long T = t;
    while(1)
    {
        //write your code here
        int n;
        cin >> n;
        if(n==0)    return 0;
        vector<int>v(n);
        for(int i=0;i<n;i++)    cin >> v[i];
        sort(v.begin(),v.end());
        int f=0;
        int cur = 0;
        for(int i=1;i<n;i++)
        {
           // cout << v[i]-v[i-1] << endl;
            if(v[i]-v[i-1]>200) f=1;
        }

        if(!f and (1422 - v[n-1]) <=100)  cout << "POSSIBLE\n";
        else    cout << "IMPOSSIBLE\n";
    }
    return 0;
}

