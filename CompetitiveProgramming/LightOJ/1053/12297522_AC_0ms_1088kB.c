#include<stdio.h>

int main()
{
    int i;
    long long unsigned t,a,b,c;
    scanf("%llu",&t);
    for(i=0;i<t;i++)
    {
        scanf("%llu %llu %llu",&a,&b,&c);
        if((a*a)==((b*b)+(c*c)) || (a*a)+((c*c))==(b*b) ||((a*a)+(b*b))==(c*c))
           printf("Case %d: yes\n",i+1);
        else
            printf("Case %d: no\n",i+1);
    }
    return 0;
}
