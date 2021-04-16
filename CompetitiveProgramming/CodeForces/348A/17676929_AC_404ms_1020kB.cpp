#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    long long mx=0;
    long long sum=0;
    for(long long i=0;i<n;i++)
    {
      cin >> arr[i];
      mx=max(mx,arr[i]);
      sum+=arr[i];
    }
    n-=1;
    if(sum%n==0)  cout << max(mx,sum/n);
    else            cout << max(mx,sum/n+1);
    return 0;
}
