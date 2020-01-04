#include<stdio.h>

int main()
{
    int n,i,k,sum=0;
    char str[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        if(str[0]=='d')
        {
                scanf("%d",&k);
                sum=sum+k;
        }
        else if(str[0]=='r')
            printf("%d\n",sum);

    }

    return 0;

}
