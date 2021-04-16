#include<stdio.h>
int main()
{
    long long int i,T,A,B,r,gcd,lcm,l,s;
    scanf("%lld",&T);
    for(i=0;i<T;i++)
    {


        scanf("%lld  %lld",&A,&B);


        if(A>B)
        {
            l=A;
            s=B;
        }
        else
        {
            l=B;
            s=A;
        }
        r=l%s;
        while(r!=0)
        {
            l=s;
            s=r;
            r=l%s;
        }
        gcd=s;
        lcm=(A*B)/gcd;
        printf("%lld %lld\n",gcd,lcm);
    }
    return 0;
}
