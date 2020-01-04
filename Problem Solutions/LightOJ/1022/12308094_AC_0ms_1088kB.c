#include<stdio.h>
#include<math.h>

int main()
{
    double r,area,pi;
    int i,t;
    pi=2*acos(0.0);
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%lf",&r);
    printf("Case %d: %.2lf\n",i+1,(4*r*r)-(pi*r*r));
    }
    return 0;
}
