#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int c1=0,c2=0;
    map<int,int>mp1,mp2;
    for(int i=0;i<4;i++)
    {
        if(s1[i]==s2[i])    c1++;
        mp1[s1[i]-48]=i+1;
        mp2[s2[i]-48]=i+1;
    }
    for(auto it:mp1)
    {
        if(it.second!=mp2[it.first] and mp2[it.first]!=0)
        {
            c2++;
        }
    }
    cout << c1 << ' ' << c2 << endl;
    return 0;
}
