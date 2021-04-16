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
   // cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        int n,k;
        cin >> n >> k;
        int c1=0,c2=0;
        int arr[n+4],res[n+4];
        for(int i=0;i<n;i++)    cin >> arr[i];
        res[0]=arr[0];
        for(int i=1;i<n;i++)
        {
             c2 = max(0,k-arr[i-1]-arr[i]);
             c1+= c2;
             res[i]=arr[i]+c2;
             arr[i]=res[i];
        }
        cout << c1 << endl;
        for(int i=0;i<n;i++)    cout << res[i] << ' ';
        cout << endl;
    }
    return 0;
}



