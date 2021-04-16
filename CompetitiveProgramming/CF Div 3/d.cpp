#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    set<pair<char,int>>st;
    for(char i='a';i<='z';i++)
    {
        if(mp[i])
        {
            st.insert({i,mp[i]});
        }
    }
    int m;
    cin >> m;
    int arr[m+5];
    for(int i=0;i<m;i++)    cin >> arr[m+5];
    sort(arr,arr+m);
    for(int i=0;i<n;i++)
    {

    }
    return 0;
}
