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

int memo[10007];

int dp(int n,int m,int pos)
{
    cout << pos << endl;
    if(pos==m)  return 1;
    if(pos>m)  return INT_MAX;
    if(pos<0)   return INT_MAX;
    if(memo[pos]!=-1)   return memo[pos];
    int p1 = INT_MAX,p2=INT_MAX;
    if(pos>=1) p1= 1+dp(n,m,pos-1);
    p2 = 1+dp(n,m,2*pos);
    return memo[pos] = min(p2,p1);
}

int main()
{
    O_O;
    long long t=1;
    //cin >> t;
    long long T = t;
    long long v3[]={1,3,4,2};
    long long v2[]={1,2,4,3};
    long long v1[]={1,1,1,1};
    long long v4[]={1,4,1,4};
    while(t--)
    {
        long long n,m;
        cin >> n >> m;
        long long cnt =0;
        while(m>n)
        {
            if(m%2)
            {
                m++;
                cnt++;
            }
            else
            {
                cnt++;
                m/=2;
            }
        }
        if(m==n)    cout << cnt << endl;
        else        cout << cnt+ (n-m) << endl;
    }
    return 0;
}
