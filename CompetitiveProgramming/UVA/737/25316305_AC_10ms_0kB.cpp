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
        int x,y,z,a;
        int dx,dy,dz;
        int x1,x2,y1,y2,z1,z2;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                cin >> x >> y >> z >> a;
                x1=x;
                y1=y;
                z1=z;
                x2 = dx = x+a;
                y2 = dy = y+a;
                z2 = dz = z+a;
            }
            else
            {
                cin >> x >> y >> z>> a;
                dx = x+a;
                dy = y+a;
                dz = z+a;
                x1 = max(x1,x);
                y1 = max(y1,y);
                z1 = max(z1,z);
                x2 = min(x2,dx);
                y2 = min(y2,dy);
                z2 = min(z2,dz);
            }
        }
        cout << max(0,(x2-x1)*(y2-y1)*(z2-z1)) << endl;
    }
    return 0;
}


