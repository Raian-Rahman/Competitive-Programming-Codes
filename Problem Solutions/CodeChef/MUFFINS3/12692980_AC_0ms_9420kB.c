#include<stdio.h>

int main()
{
    int t,i,n,max;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        max=n/2;

        printf("%d\n",max+1);
    }
    return 0;
}
