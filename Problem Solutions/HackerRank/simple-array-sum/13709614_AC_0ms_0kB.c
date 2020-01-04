#include<stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        sum=sum+t;
    }
    printf("%d",sum);
    return 0;
}
