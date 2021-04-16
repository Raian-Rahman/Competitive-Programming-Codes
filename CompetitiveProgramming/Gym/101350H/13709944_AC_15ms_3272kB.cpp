#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int flag1=0,flag=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='A'||s[j]== 'H'||s[j]==  'I'||s[j]==  'M'||s[j]==  'O'||s[j]==  'T'||s[j]==  'U'||s[j]==  'V'||s[j]==  'W'||s[j]==   'X'||s[j]==   'Y')
                continue;
            else
                {
                    flag1=5;
                    break;
                }
        }



            int len=s.size();
            for(int j=0;j<len;j++)
            {
                if(s[j]==s[len-j-1])
                {
                    flag=0;
                }
                else
                    {
                        flag=1;
                        break;

                    }



        }
        if(flag==0 && flag1!=5)
            printf("yes\n");
        else if(flag==1 ||flag1==5)
            printf("no\n");
    }
    return 0;
}

