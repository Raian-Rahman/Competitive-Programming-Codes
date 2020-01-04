#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char  s[10000]={0};
    int i;

    while(scanf("%s",s)!=EOF)
    {
        //puts(s);
        //printf("%d",strlen(s));
        for(i=0;i<strlen(s)-1;i+=2)
        {
            int d1,d2,sum;
            //printf("%c %c ",s[i],s[i+1]);
            if(s[i]>='A' && s[i]<='F')
            {
                d1=s[i]-55;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                d1=s[i]-48;
            }
            if(s[i+1]>='A' && s[i+1]<='F')
            {
                d2=s[i+1]-55;
            }
            else if(s[i+1]>='0' && s[i+1]<='9')
            {
                d2=s[i+1]-48;
            }
            sum= d1*16+d2;
            printf("%c",sum);

        }
        printf("\n");
    }
    return 0;
}
