#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin >> len;
    string a,b,c;
    cin >> a >> b >> c;
    string s;
    for(int i=0;i<len;i++)
    {
        map<char,int>mp;
        map<char,int>::iterator it;
        mp[a[i]]++;
        mp[b[i]]++;
        mp[c[i]]++;
        int mx=-1;
        char ch;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>mx)
            {
                ch=it->first;
                mx=it->second;
            }
        }
        s.push_back(ch);

    }
    cout << s << '\n';
    return 0;
}
