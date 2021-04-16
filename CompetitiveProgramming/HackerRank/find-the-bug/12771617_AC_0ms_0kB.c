#include<stdio.h>
#include<string.h>


int main()
{
    char str[1000]={0};
    char pos[1000][1000]={0};
    int n,i,len,max=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%s",str);
        for(j=0;j<n;j++)
        {
            pos[j][i]=str[j];

        }
    }
    for(i=0;i<n;i++)
       {
            for(j=0;j<n;j++)
                {
                    if(pos[j][i]=='X')
                        printf("%d,%d",i,j);
                }
        }
    return 0;
}
