#include<stdio.h>
#include<string.h>

int main()
{
    char str[2000]={0};
    int len;
    gets(str);
    if(str[0]>='a' && str[0]<='z')
        str[0]=str[0]-32;
    printf("%s",str);
    return 0;
}
