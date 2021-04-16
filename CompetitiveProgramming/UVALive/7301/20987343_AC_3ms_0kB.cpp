#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FASTIO ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL)

int main()
{
    //FASTIO;
    //cout << "Hello World!\n";
    //cout <<  __lcm(4,2) << ' ';
    long long t;
    cin >> t;
    for(long long x=0;x<t;x++)
    {
        long long n,k;
        cin >> n >> k;
        long long arr[n+2];
        for(long long i=0;i<n;i++)    cin >> arr[i];
        sort(arr,arr+n);
        long long cnt,last,tot=0,cur=0;
        long long i=0;
        while(cur+arr[i]<=k and i<n)
        {
            cur+=arr[i];
            tot+=cur;
            i++;
        }
        cout << "Case "  << x+1 <<  ": " << i << ' ' << cur <<  ' '  << tot << '\n';
    }

    return 0;
}













/* programmed by : pranonrahman
   id:  pranonraian */
