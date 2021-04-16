#include<stdio.h>

int main()
{
    int t,i;
    int x1,y1,x2,y2;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        printf("%d %d\n",x2+(x2-x1),y2+(y2-y1));
    }

    return 0;
}
