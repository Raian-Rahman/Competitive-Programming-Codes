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
   // cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        long long n;
        cin >> n;
        int k = 2*(n-1) + n;
        int res = 2 + 3*k + (n*2);
        cout << res << endl;
        cout << 2 << ' ' << 0 << endl;
        for(int i=1;i<=k;i++)
        {
            cout << 2 << ' ' << i << endl;
            cout << 0 << ' ' << i << endl;
            cout << 4 << ' ' << i << endl;
        }
        cout << 2 << ' ' << k+1 << endl;
        for(int i=1;i<=k;i+=2)
        {
            cout << 1 << ' ' << i << endl;
            cout << 3 << ' ' << i << endl;
        }

    }
    return 0;
}



