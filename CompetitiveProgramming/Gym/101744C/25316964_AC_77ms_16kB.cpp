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
    int x,y;
    cin >> x >> y;
    while(1)
    {
        if(x>y)
        {
            cout << "1 " << (x-y) << endl;
            cout.flush();
            x=y;
        }
        else
        {
            cout << "2 " << y-x << endl;
            cout.flush();
            y=x;
        }

        if(x<=0 and y<=0)
            break;
        int dx,dy;
        cin >> dx >> dy;

        if(dx==1)
            x-=dy;
        else
            y-=dy;

    }
    return 0;
}


