#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long long a[n+5],b[n+5],c[n+5];
    long long aMax=-1,bMax=-1,cMax=-1;
    for(long long i=0;i<n;i++)
    {
        vector<long long>v(3);
        for(long long j=0;j<3;j++)    cin >> v[j];
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        a[i]=v[0];
        b[i]=v[1];
        c[i]=v[2];
        //aMax=max(aMax,a[i]);
        bMax=max(bMax,b[i]);
        cMax=max(cMax,c[i]);
    }
    long long ans=0;
    vector<long long>res;
    for(long long i=0;i<n;i++)
    {
        if(a[i]>bMax and b[i]>cMax)
        {
            ans++;
            res.push_back(i+1);
        }
    }
    cout << ans << '\n';
    for(long long i=0;i<res.size();i++)   cout << res[i] << ' ';
    cout << '\n';
    return 0;
}
