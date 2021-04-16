//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;


int main()
{
    O_O;
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        long long n,k;
        cin >> n >> k;
        long long arr[n+7],w[k+7];
        for(long long i=0;i<n;i++)    cin >> arr[i];
        for(long long i=0;i<k;i++)    cin >> w[i];
        sort(arr,arr+n);
        reverse(arr,arr+n);
      //  for(long long i=0;i<n;i++)    cout << arr[i] << ' ';
     //   cout << endl;
        sort(w,w+k);
        long long l = 0, r=n-1;
        long long sum=0;
        for(long long i=0;i<k;i++)
        {
            if(w[i]==1) sum+=(2*arr[l]);
            else        sum+= arr[l];
            l++;
        }
      //  cout << sum << endl;
        reverse(w,w+k);
        for(long long i=0;i<k;i++)
        {
            long long rem = w[i]-1;
            if(rem!=0)  sum+= arr[r];
            for(long long j=0;j<rem;j++)  r--;
        }
        cout << sum << endl;
    }
    return 0;
}



