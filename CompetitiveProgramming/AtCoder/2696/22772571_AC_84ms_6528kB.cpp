#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    map<long long,long long>mp;
    vector<long long>v;
    for(long long i=0;i<n;i++)
    {   long long  a;
        cin >> a;
        mp[a]++;
        if(mp[a]==2)
        {
            v.push_back(a);
            mp[a]=0;
        }
    }
    sort(v.begin(),v.end());
    n=v.size();
    if(n>=2)
    {
        cout << v[n-1]*v[n-2] << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }
    return 0;
}
