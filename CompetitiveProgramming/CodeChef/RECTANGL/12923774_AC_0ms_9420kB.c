#include<stdio.h>

int main()
{
    int t,i,a,b,c,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==b&&c==d)
            printf("YES\n");
        else if(a==c&&b==d)
            printf("YES\n");
        else if(a==d&&b==c)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
