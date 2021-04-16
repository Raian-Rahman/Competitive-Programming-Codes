#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    map<long long,long long>mp;
    for(long long i=0;i<n;i++)
    {
        long long a;
        cin >> a;
        mp[a]++;
        if(mp[a]!=1)
        {
            mp[a]=0;
        }
    }
    map<long long,long long>::iterator it;
    long long res =0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==1)
        {
         //   cout << it->first << ' ';
            res ++;
        }
    }
    cout << res << '\n';
    return 0;
}
