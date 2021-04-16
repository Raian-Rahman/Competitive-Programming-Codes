#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long arr[n+5];
    for(long long i=0;i<n;i++)    cin >> arr[i];
    map<long long,long long>mp;
    sort(arr,arr+n);
    reverse(arr,arr+n);
    long long cnt=0;
    for(long long i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            if(mp[arr[i]+1]==0)
            {
             //   cout << "dhukse\n";
                mp[arr[i]+1]++,cnt++;
                arr[i]++;
            }
            else if(mp[1]==0)
            {
                mp[arr[i]]++,cnt++;
            }

        }
        else if(mp[arr[i]+1]==0)
        {
            mp[arr[i]+1]++,cnt++;
            arr[i]++;
        }
        else if(mp[arr[i]]==0)
        {
            mp[arr[i]]++,cnt++;
        }
        else if(mp[arr[i]-1]==0)
        {

            mp[arr[i]-1]++,cnt++;
            arr[i]--;
        }
    }
   // for(int i=0;i<n;i++)    cout << arr[i] << ' ';
   // cout << endl;
    cout << cnt << endl;
    return 0;
}
