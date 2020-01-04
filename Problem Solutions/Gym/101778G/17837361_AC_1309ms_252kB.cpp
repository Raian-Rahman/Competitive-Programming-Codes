#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,area,AREA;
        cin >> a >> b >> area >> AREA ;
        double f=sqrt(AREA)/sqrt(area);
        double r2=f*a;
        double r1=f*b;
        printf("%.8lf %.8lf\n",r2-b,r1-a);

    }
    return 0;
}