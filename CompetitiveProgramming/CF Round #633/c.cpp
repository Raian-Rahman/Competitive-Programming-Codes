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
     vector<long long>v;
     long long cur=1;
     v.push_back(0);
     for(long long i=0;i<45;i++)
     {
         v.push_back(cur);
         cur = cur*2;
     }
     vector<long long>cum(50,LONG_MAX);
     cum[0]=0;
     for(long long i=1;i<v.size();i++)    cum[i]=cum[i-1]+v[i];
     for(auto it:cum)   cout << it << endl;
     cin >> t;
     long long T = t;
     while(t--)
     {
          //write your code here
            long long n;
            cin >> n;
            long long arr[n+3];
            for(long long i=0;i<n;i++)
            {
                cin >> arr[i];
            }
            long long mx = 0;
            for(long long i=1;i<n;i++)
            {
                if(arr[i]>=arr[i-1])    continue;
                else
                {
                    long long dif = arr[i-1]-arr[i];
                    long long pos = lower_bound(cum.begin(),cum.end(),dif)-cum.begin();
                    mx = max(pos,mx);
                    arr[i]=arr[i-1];
                }
            }
            cout << mx<< endl;
     }
     return 0;
}



