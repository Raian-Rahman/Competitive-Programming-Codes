#include<stdio.h>
#include<string.h>
int main()
{
    char n[500]={0};
    int i,len;
    int flag=0;
    gets(n);
    len=strlen(n);

    for(i=0;i<len;i++)
        {
            if(n[i]=='H' || n[i]=='Q' || n[i]=='9')
                {
                    printf("YES");
                    flag=1;
                    break;
                }
        }
    if(flag==0)
        printf("NO");
    return 0;
}
