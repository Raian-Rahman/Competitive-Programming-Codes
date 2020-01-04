#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    char s[1000000];
    int c;
    while(gets(s))
    {
    int b=-1;
    //cout<< s.size();
    //cin>> c;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            for(int j=i-1;j>b;j--)
                printf("%c",s[j]);
                printf(" ");
            b=i;
        }
    }
    for(int i=strlen(s)-1;i>b;i--)
        printf("%c",s[i]);

        printf("\n");
    }
    return 0;
}
