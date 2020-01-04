#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t,n;
    double cg;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %lf",&n,&cg);
        printf("%.2lf\n",((cg*(n-1))+(4.0*(9-n)))/8.0);
    }
    return 0;
}
