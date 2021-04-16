#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long t;
    cin >> t;
    long long T=t;
    while(t--)
    {
        long long n;
        long long arr[100070],memo[100070];
        cin >> n;
        for(long long i=0;i<n;i++)    cin >> arr[i];
        memo[0]=arr[0];
        memo[1]=max(arr[0],arr[1]);
        for(long long i=2;i<n;i++)
        {
            memo[i]=max(memo[i-2]+arr[i],memo[i-1]);
        }
        cout << "Case " << T-t << ": " << memo[n-1] <<endl;
    }
    return 0;
}
