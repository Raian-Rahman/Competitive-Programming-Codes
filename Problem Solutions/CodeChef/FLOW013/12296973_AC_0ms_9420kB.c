#include<stdio.h>

int main()
{
    int t,a,b,c;
    int i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

    scanf("%d %d %d",&a,&b,&c);
    if((a+b+c)==180 && a!=0 && b!=0 && c!=0)
        printf("YES\n");
    else
        printf("NO\n");
    }
    return 0;
}
