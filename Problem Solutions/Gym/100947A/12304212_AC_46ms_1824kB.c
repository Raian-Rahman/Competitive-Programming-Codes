#include<stdio.h>

int main()
{
    unsigned int x,g,r,t,y,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&x,&g,&y,&r);

        while(x>(g+y+r))
        {
            x=x-(g+y+r);

        };

        if(x>0 && x<=g-1)
            printf("GREEN\n");
        else if(x>g-1 && x<=g+y-1)
            printf("YELLOW\n");
        else if(x>g+y-1 && x<=g+y+r-1)
            printf("RED\n");
    }

    return 0;
}
