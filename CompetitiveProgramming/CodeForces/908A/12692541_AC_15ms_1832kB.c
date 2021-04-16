#include<stdio.h>
#include<string.h>

int main()

{
    char s[51]={0};
    int i,x,vow=0,odd=0;
    gets(s);
    x=strlen(s);
    for(i=0;i<x;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            vow++;
        if(s[i]>= '0' && s[i] <= '9' && (int)s[i]%2 != 0)
            odd++;

    }
    printf("%d",vow+odd);
    return 0;
}
