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
    //cin >> t;
    long long T = t;
    while(1)
    {
        //write your code here
        string s;
        cin >>s;
        if(s==".")  return 0;
        long long len = -1;
        for(long long i=1;i<s.size()-1;i++)
        {
            if(s.size()%i)  continue;
            long long f = 1;
            for(long long j=i;j<s.size() and f;j++)
            {
                if(s[j]==s[j%i])       continue;
                else
                {
                    f=0;
                }
            }
            if(f)
            {
                len = s.size()/i;
                break;
            }
        }
        if(len==-1) cout << 1 << endl;
        else        cout << len << endl;

    }
    return 0;
}



