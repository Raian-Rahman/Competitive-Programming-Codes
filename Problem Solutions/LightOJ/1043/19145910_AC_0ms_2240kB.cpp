#include<bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        double a,b,c,rat,x,y;
        scanf("%lf %lf %lf %lf",&a,&b,&c,&rat);
 
        //cout << x << " " <<y;
        printf("Case %d: %.6lf\n",i+1,a*sqrt(rat/(1+rat)));
    }
    return 0;
}
 