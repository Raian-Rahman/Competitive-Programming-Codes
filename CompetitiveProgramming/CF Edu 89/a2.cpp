#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        long long n,x;
        cin >> n >> x;
        long long sum=0;
        long long arr[n+3];
        for(long long i=0;i<n;i++)
        {
            cin >> arr[i];
            sum+= arr[i];
        }
        if((sum+x)%x!=0)    cout << n << endl;
        else
        {
            int ans=0;
            int f=0;
            for(int i=0;i<n;i++)
            {
                if((sum-arr[i])%x==0)   continue;
                else
                {
                    ans = n-i-1;
                    f=1;
                    break;
                }
            }
            int ans2=0;
            for(int i=n-1,j=0;i>=0;i--,j++)
            {
                if((sum-arr[i])%x==0)   continue;
                else
                {
                    ans2 = n-j-1;
                    f=1;
                    break;
                }
            }

            if(f)   cout << max(ans,ans2) << endl;
            else    cout << -1 << endl;
        }
    }
    return 0;
}



