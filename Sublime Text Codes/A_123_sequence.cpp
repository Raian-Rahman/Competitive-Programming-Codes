#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin >> n;
     int arr[4]={0};
     int mx = -1,num=-1;
     for(int i=0;i<n;i++)
     {
          int x;
          cin >> x;
          arr[x]++;
          if(mx<=arr[x])
          {
               num = x;
               mx = arr[x];
          }
     }
     //for(int i=0;i<4;i++)     cout << arr[i] << ' ';
    // cout << endl;
     //cout << mx << ' ' << num << endl;
     int sum =0;
     for(int i=1;i<4;i++)
     {
          if(i!=num)     sum+=arr[i];
     }
     cout << sum << endl;
     return 0;
}