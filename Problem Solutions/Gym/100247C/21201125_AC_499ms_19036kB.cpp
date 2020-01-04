#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,s;
    cin >> n >>s;
    long long arr[n+5];
    long long cum[n+5];
    for(long long i=0;i<n;i++)
    {
        cin >> arr[i];
        if(i==0)    cum[0]=arr[0];
        else        cum[i]=cum[i-1]+arr[i];
    }
    map<long long,long long>mp;
    long long ans=0;
    mp[0]=1;
    for(long long i=0;i<n;i++)
    {
        ans+=mp[cum[i]-s];
        mp[cum[i]]++;
    }
    cout << ans << '\n';
    return 0;
}
