#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        double r,v;
        cin >> r >> v;
       // cout << r << v << endl;
       // cout << (1.0*r/v)  << endl;
       // cout << (1.0*PI/2.0) << endl;
        cout << "Case " << i+1 << ": " << fixed << setprecision(10) <<1.0*((PI*r)/(2.0*v)) << '\n';
    }
    return 0;
}
