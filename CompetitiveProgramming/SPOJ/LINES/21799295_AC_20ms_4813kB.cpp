#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        map<double,long long>mp;
        long long cnt=0;
        long long n;
        cin >> n;
        if(n==0)    break;
        long long x[n+5],y[n+5];
        for(long long i=0; i<n; i++)
        {
            cin>> x[i] >> y[i];
        }
        for(long long i=0;i<n;i++)
            for(long long j=i+1;j<n;j++)
            {
                double slope ;
                if(x[j]-x[i]==0)    slope = INT_MAX;
                else slope= (double)(y[j]-y[i])/(x[j]-x[i]);
             //   cout << slope << endl;
                if(mp[slope]==0)    cnt++;
                mp[slope]++;
            }
        cout << cnt << '\n';
    }
    return 0;
}
