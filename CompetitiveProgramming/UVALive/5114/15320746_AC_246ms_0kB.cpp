#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
 
int main()
{
    int t,x,n,k;
    int arr[20000]={0};
    cin >> t;
    for(x=0;x<t;x++)
    {
 
        int inp;
        cin >> n >> k;
 
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
 
        sort(arr,arr+n);
        int ans = arr[k - 1] - arr[0];
        for( int i=1;i+k-1<n;++i)
        {
            ans=min(ans,arr[i+k-1]-arr[i]);
 
        }
 
        printf("%d\n",ans);
    }
    return 0;
}