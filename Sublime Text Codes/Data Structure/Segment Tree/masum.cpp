#include<bits/stdc++.h>
using namespace std;
#include<stdlib.h>

int main()
{
    char s[200] = "";
    gets(s);
    map<char,int>mp;

    for(int i=0;i<17;i++)
    {
        mp[s[i]]++;
    }
    for(auto it:mp)
    {
        cout << it.second << endl;
    }
}