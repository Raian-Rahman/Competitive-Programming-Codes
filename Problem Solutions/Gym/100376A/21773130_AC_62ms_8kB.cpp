#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[n+5];
    for(long long i=0;i<n;i++)    cin >> arr[i];
    long long cnt=0;
    for(long long i=0;i<n;i++)
    {
        for(long long j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])   cnt++;
        }
    }
    cout <<  cnt << '\n';
    return 0;
}
