#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>



int main()
{
    int i;
    char str1[1000]={0};
    while(1)
    {   int flag=0;
        gets(str1);
        int len=strlen(str1);
        if(str1[0]=='*')
            break;
        for( i=0;i<len;i++)
            str1[i]=toupper(str1[i]);
        
        int x=0;
        for( i=0;i<len;i++)
        {
            if(str1[i]==' '&&i!=len-1)
            {
                if(str1[x]==str1[i+1])
                    flag=0;
                else
                {
                    flag=1;
                    break;
                }
                x=i+1;
            }

        }
        if(flag==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}

