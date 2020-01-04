#include<stdio.h>

int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n>1)
        printf("%d\n",n+1);
        else
        printf("%d\n",2*n);
    }
    return 0;
}
