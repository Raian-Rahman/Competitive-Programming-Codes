#include<stdio.h>

int main()
{
    long long int  ar1[10000]={0},ar2[10000]={0};
    long long int m,n,i,j,dif,max=0,min=0;
    scanf("%lld",&m);
    for(i=0;i<m;i++)
    {
        scanf("%lld",&j);
        ar1[j]++;
        if(max<j)
            max=j;
        if(j<min || min==0)
            min=j;
    }
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&j);
        ar2[j]++;
        if(max<j)
            max=j;
        if(j<min || min==0)
            min=j;
    }

    for(i=min;i<=max;i++)
    {

        if(ar1[i] != ar2[i])
        {
            if(ar1[i]-ar2[i] > 0)
                {
                    dif = ar1[i]- ar2[i];
                                printf("%lld ",i);
                }

            else
                {
                    dif = ar2[i]- ar1[i];
                            printf("%lld ",i);
                }

        }


    }

    return 0;
}
