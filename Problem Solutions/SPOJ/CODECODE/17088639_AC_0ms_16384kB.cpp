#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lf %lf",&x,&y);
        //if(x==0.0 || y==0.0)
        //    printf("0%\n");
        //else
        printf("%.2lf%%\n",(x*y)/100.0+ (100-x)*(100-y)/100.0);
    }
    return 0;
}
