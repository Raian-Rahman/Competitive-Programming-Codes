#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int cb=0,cw=0,a=0,t=0;
        cin>>n;
        string s;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='B')
                cb++;
            else if(s[j]=='W')
                cw++;
            else if(s[j]=='A')
                a++;
            else
                t++;

        }
        if(a==n)
            printf("Case %d: ABANDONED\n",i+1);

        else if(cb+a==n)
            printf("Case %d: BANGLAWASH\n",i+1);
        else if(cw+a==n)
            printf("Case %d: WHITEWASH\n",i+1);
        else if(cb>cw)
            printf("Case %d: BANGLADESH %d - %d\n",i+1,cb,cw);
        else if(cw>cb)
            printf("Case %d: WWW %d - %d\n",i+1,cw,cb);
        else
            printf("Case %d: DRAW %d %d\n",i+1,cw,t);

    }
    return 0;
}
