#include<stdio.h>

int main()
{
    int n,num,i,count=1,pre_num,max=0;
    scanf("%d",&n);
    scanf("%d",&pre_num);
    max=1;
    for(i=1;i<n;i++)
    {
            scanf("%d",&num);
           if(num>=pre_num)
           {
               count++;
               //printf("\n%d\n",count);
           }

           else
           {
               count=1;
           }
           pre_num=num;
           if(count>max)
                max=count;
    }
    printf("%d",max);
    return 0;
}
