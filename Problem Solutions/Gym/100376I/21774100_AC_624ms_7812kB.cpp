#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,a,b;

    cin>>n>>a>>b;

    long long arr[n+5];

    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    long long x,y;

    x = arr[0]*a;
    y = arr[0]*a;

    for(int i=1;i<n;i++)
    {
        x = max(arr[i]*a,x+(arr[i]*a));
        y = max(x,y);
    }

    cout<<y+b<<'\n';
    return 0;
}
