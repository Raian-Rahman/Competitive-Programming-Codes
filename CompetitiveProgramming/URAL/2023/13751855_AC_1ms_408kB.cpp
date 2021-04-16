#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<cstdlib>

using namespace std;

int main()
{
    int t,i,cont=0;
    int ex=1,inp;
    cin>> t;
    for(i=0;i<t;i++)
    {

        string s;
        cin>> s;
        if(s[0]=='A' || s[0]=='P'|| s[0]=='O'|| s[0]=='R')
            inp=1;
        else if(s[0]=='B' || s[0]=='M'|| s[0]=='S')
            inp=2;
        else if(s[0]=='D' || s[0]=='G'|| s[0]=='J'|| s[0]=='K'|| s[0]=='T'|| s[0]=='W')
            inp=3;
        cont=cont+abs(ex-inp);
            ex=inp;
    }

    printf("%d",cont);
}
