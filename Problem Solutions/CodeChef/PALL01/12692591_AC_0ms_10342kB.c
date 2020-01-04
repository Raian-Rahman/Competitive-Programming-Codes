#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,len,j,k,flag;
    char x[6]={0};
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<6;j++)
            x[i]=0;
        flag=1;
        scanf("%s",&x);
        len=strlen(x);
        for(j=0,k=len-1;j<len,k>=0;j++,k--)
            if(x[j] != x[k])
            {
                flag=0;
                break;
            }

            if(flag == 0)
            {
                printf("losses\n");
            }
            else if(flag ==1)
            {
                printf("wins\n");
            }

    }
    return 0;
}
