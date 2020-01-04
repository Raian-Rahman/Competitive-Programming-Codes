#include<stdio.h>


int main()
{
    int t,i;
    int num,reminder,last,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        count=0;
        scanf("%d",&num);
        while(num!=0)
        {
            last=num%10;
            num=num/10;
            if(last==4)
                count++;
        }
        printf("%d\n",count);
    }
}
