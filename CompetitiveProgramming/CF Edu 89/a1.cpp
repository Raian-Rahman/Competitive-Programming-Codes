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
        long long n,divisor;
        cin >> n >> divisor;
        long long result=0;
        long long arr[n+3];
        for(long long i=0;i<n;i++)
        {
            cin >> arr[i];
            result+= arr[i];
        }
        if((result+divisor)%divisor!=0)    cout << n << endl;
        else
        {
            int ans=0;
            int f=0;
            for(int i=0;i<n;i++)
            {
                if((result-arr[i])%divisor==0)   continue;
                else
                {
                    ans = n-i-1;
                    f=1;
                    break;
                }
            }
            int resutlt2=0;
            for(int i=n-1,j=0;i>=0;i--,j++)
            {
                if((result-arr[i])%divisor==0)   continue;
                else
                {
                    resutlt2 = n-j-1;
                    f=1;
                    break;
                }
            }

            if(f)   cout << max(ans,resutlt2) << endl;
            else    cout << -1 << endl;
        }
    }
    return 0;
}


