#include<iostream>
#include<cstdio>
using namespace std;
 
double pi=3.141592653589793;
int main()
{
    double r1,r2,rx,r,p,h;
    int t,i;
    double total,juice,emty;
    cin>> t;
    for(i=0;i<t;i++)
    {
        cin >> r1 >> r2 >> h >> p;
        rx=h/(r1/r2-1);
        r=((rx+p)/rx)*r2;
        juice=(pi*(r*r*(p+rx)-r2*r2*rx))/3;
        printf("Case %d: %.9lf\n",i+1,juice);
    }
    return 0;
}