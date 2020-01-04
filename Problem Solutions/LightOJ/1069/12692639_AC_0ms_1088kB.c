#include<stdio.h>

int main()
{
    int t,i,x,y,time;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        if(y==x)
        {
            time= x*4 + 3*3 + 5*2;

        }
        else if(y >x)
        {
            time = y*4 + 3*3 + 5*2;
        }
        else if( y < x)
        {
            time = 4* (x-y + x) + 3*3 + 5*2 ;
        }

        printf("Case %d: %d\n",i+1,time);
    }
    
    return 0;
}
