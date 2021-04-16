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
        long long n,m;
        cin >> n >>m;
        long long arr[n+7];
        deque<long long>dq;
        for(long long i=1;i<=n;i++)    cin >> arr[i];
        sort(arr+1,arr+n+1);
        reverse(arr+1,arr+n+1);
        long long cnt=1,cur_max=arr[1];
        long long lo = 1;
        long long hi = arr[1];
        long long res =0;
        while(lo<=hi)
        {
            if(lo==hi and hi==0)    break;
            long long mid = (lo+hi)/2;
            if(mid==0)  break;
            long long cnt =0;
            for(long long i=1;i<=n;i++)
            {
                cnt+= (arr[i]/mid);
            }
            if(cnt>=m)
            {
                lo=mid+1;
                res = mid;
            }
            else hi=mid-1;
        }
        cout << res << endl;

    }
    return 0;
}
