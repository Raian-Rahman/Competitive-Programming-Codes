#include<bits/stdc++.h>
#define chck 1e-12
using namespace std;

int p,q,r,s,t,u;

double f(double x)
{
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}

double bs()
{
    double mx,lo=0,hi=1,mid;
    int tst=100;
    while(tst--)
    {
        mid=(lo+hi)/2;
        mx = f(mid);
        if(abs(mx)<chck)
            return mid;
        if(mx > 0) lo=mid;
        else hi=mid;
    }
    return -1;
}

int main()
{
    while(cin>>p >> q >> r >> s >> t >> u)
    {
        if(p==0 and q==0 and r==0 and s==0 and t==0 and u==0)
        {
            cout << 0.000000 << "\n";
            continue;
        }
        double flag=bs();

        if(flag==-1)    cout << "No solution\n";
        else            printf("%.4lf\n",flag);
    }
    return 0;
}
