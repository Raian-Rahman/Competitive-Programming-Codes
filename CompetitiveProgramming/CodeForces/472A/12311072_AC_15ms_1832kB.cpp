#include<stdio.h>
#include<math.h>



int  prime(int n)
{
    int rt,i;
    if(n<2)
        return 0;
    else if(n==2)
        return 1;


        for(i=2;i<n;i++)
        {
            if(n%i == 0)
                return 0;
        }
        return 1;
}
int main()
{
    int n,x,y;
    scanf("%d",&n);

    for(x=4;x<n;x++)
        {
        y=n-x;
        if(prime(x)==0 && prime(y)==0 )
                        {
                                printf("%d %d",x,y);
                                break;
                        }

    }


    return 0;
}
