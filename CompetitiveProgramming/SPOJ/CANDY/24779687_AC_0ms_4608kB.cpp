#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t=1;
   // cin >>t;
    while(1)
    {
        int n;
        cin >> n;
        if(n==-1)   return 0;
        int arr[n+3];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        if(sum%n!=0)    cout << -1 << endl;
        else
        {
            sort(arr,arr+n);
            reverse(arr,arr+n);
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<=(sum/n))  break;
                else
                {
                    cnt+=(arr[i]-(sum/n));
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
