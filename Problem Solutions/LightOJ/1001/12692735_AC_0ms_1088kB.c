#include<stdio.h>

int main()
{
    int t,i,num;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&num);
        if(num%2 ==0)
            printf("%d %d\n",num/2,num/2);
        else if(num<=10)
            printf("0 %d\n",num);
        else
            printf("%d %d\n",10,num-10);

    }
    return 0;
}
