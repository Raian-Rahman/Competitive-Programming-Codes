#include<bits/stdc++.h>

using namespace std;


int  main()
{
    int t;
	int arr1[10000],arr2[10000],arr3[10000];
    cin >> t;
    while(t--)
    {
        memset(arr3,0,sizeof(arr3));
        int n;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            int num=0;
            int sum=1;
            cin>>arr1[i];
            while(arr1[i]%sum==0)
            {
                num++;
                sum*=2;
            }
            arr2[i]=num-1;
            arr3[i]=num-1;
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(arr1[i] > arr1[j])
                {
                    arr3[i] = max(arr3[i],arr2[i] + arr3[j]);
                }
            }
        }
        int ans=0;
        for(int i=1; i<=n; i++)
            ans=max(ans,arr3[i]);
        cout << ans << '\n';
    }
    return 0;
}
