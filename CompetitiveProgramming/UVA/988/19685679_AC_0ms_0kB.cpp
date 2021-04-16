#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ch,ans;
    int ii=0;
    while(cin >> n)
    {
        if(ii!=0)
        cout << '\n';
        else ii++;
        int arr[n+5];
        memset(arr,0,sizeof(arr));
        ans=0;
        arr[0]=1;

        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            if(x==0)  ans+=arr[i];
            for(int j=0;j<x;j++)
            {
                cin >> ch;
                arr[ch]+=arr[i];
            }

        }
        cout << ans << '\n';

    }
    return 0;
}
