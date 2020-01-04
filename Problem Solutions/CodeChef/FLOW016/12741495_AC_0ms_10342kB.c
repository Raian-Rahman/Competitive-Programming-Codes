#include<stdio.h>

int main()
{
    long long int n1,n2,x,y,r,lcm;
    int t ,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&n1,&n2);
        if(n1>n2)
        {
            x=n1;
            y=n2;
        }
        else
        {
            x=n2;
            y=n1;
        }

        r = x%y;
        while ( r!= 0)
        {
            x=y;
            y=r;
            r=x%y;
        }

        lcm = (n1*n2)/y;

        printf("%lld %lld\n",y,lcm);
    }

return 0;
}


