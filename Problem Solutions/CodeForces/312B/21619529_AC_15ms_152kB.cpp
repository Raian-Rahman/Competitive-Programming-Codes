#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    double a_win=1.0*a/b;
   // cout << a_win << endl;
    double b_lose=(1-((1.0*a)/b))*(1-((1.0*c)/d));
   // cout << b_lose << endl;
    double a_w=(1.0*a_win)/(1.0*(1-(1.0*b_lose)));
    cout << fixed << setprecision(10) << a_w << endl;
   // printf("%.08lf\n",a_w);
    return 0;
}
