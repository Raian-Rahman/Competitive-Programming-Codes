#include<stdio.h>
int main()
{
    int n,p1,p2,lp1=0,lp2=0;
    int flag,lead,max=0;
    int win;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&p1,&p2);
        lp1=lp1+p1;
        lp2=lp2+p2;
        if(lp1>lp2)
        {
            lead=lp1-lp2;
            flag=1;
        }
        else
        {
            lead=lp2-lp1;
            flag=2;
        }
        if(lead>max)
        {
            max=lead;
            win=flag;
        }
    }
    printf("%d %d",win,max);
    return 0;
}
