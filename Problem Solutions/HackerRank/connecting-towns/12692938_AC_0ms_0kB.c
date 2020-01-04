#include<stdio.h>

int main()
{
    long long unsigned res;
    int t,i,n,j;
    int n1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        res=1;
        scanf("%d",&n);
        for(j=0;j<n-1;j++)
        {
            scanf("%d",&n1);
            res=(res*n1)%1234567;
        }



        printf("%llu\n",res);
    }
    
    return 0;
}
