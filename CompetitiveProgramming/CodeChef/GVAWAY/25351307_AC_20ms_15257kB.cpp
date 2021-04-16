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


int pow(int x,int y)
{
    int rep = 1;
    for(int i=0;i<y;i++)    rep*=x;
    return rep;
}

int main()
{
    O_O;
    long long t=1;
    cin >> t;
    long long T = t;
    int v3[]={1,3,4,2};
    int v2[]={1,2,4,3};
    int v1[]={1,1,1,1};
    int v4[]={1,4,1,4};
    while(t--)
    {
        int l,r,n;
        cin >> l >> r >> n;
        if(l==r)    cout << 1 << endl;
        else        cout << n << endl;
    }
    return 0;
}



