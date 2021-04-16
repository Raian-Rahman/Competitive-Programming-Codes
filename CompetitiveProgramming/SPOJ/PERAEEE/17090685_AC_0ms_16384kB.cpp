#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long t,i,j;
    double x,y;
    scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lf %lf",&x,&y);
        if(x-y<=1)
            printf("%.6lf",1/x);
        else
            printf("%.6lf",(x-(y+1))/x);
        printf("\n");

    }
    return 0;
}
