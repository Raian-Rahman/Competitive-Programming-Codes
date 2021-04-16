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
        string s;
        cin >> s;
        vector<long long>v0;
        set<long long>sp,sn;
        sp.insert(2147483647);
        sn.insert(2147483647);
        for(long long i=0;i<n;i++)
        {
            if(s[i]=='0')   v0.push_back(i);
            else
            {
                sp.insert(i);
                sn.insert(-(i));
            }
        }
        long long cnt=0;
        for(long long i=0;i<v0.size();i++)
        {
            long long pos = v0[i];
            if(sp.find(pos)!=sp.end())  continue;
            long long left = *sn.lower_bound(-pos);
            long long right = *sp.lower_bound(pos);
          //  cout << left << ' ' << right << endl;
            if((abs(left)<pos-k or left==2147483647) and (abs(right)>pos+k or right==2147483647))
            {
                cnt++;
                sp.insert(pos);
                sn.insert(-pos);
           //     cout << pos << endl;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}


