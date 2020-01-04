#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        int n,c;
        cin >> n >> c;
        int j;
        int arr[n];
        int sum=0;
        for(j=0;j<n;j++)
        {
            cin >> arr[j];
            sum+=arr[j];
        }

        if(sum<=c)
            cout<< "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
