#include<stdio.h>

int main()
{
    int t,i;
    long long int x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&x,&y);
        if(x<y)
            printf("<\n");
        else if(x>y)
            printf(">\n");
        else
            printf("=\n");
    }
    return 0;
}
