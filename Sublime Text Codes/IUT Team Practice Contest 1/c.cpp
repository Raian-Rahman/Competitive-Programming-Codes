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
#define testPrint(n) cout << "test" << n << endl;


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
        double v,s;
        cin >> v >> s;
        double angle = 2*sin(PI/v);
        double rad = s/angle;
        FIXED(10);
        cout << PI * rad * rad << endl; 

    }
    return 0;
}


