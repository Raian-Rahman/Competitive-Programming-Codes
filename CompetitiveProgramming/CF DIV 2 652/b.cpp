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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int f1=-1;
        /*if(n==1)
        {

            cout << s[0] << endl;
            continue;
        }*/
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                f1=i;
            }
            else break;
        }
        int f0=n;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                f0=i;
            }
            else break;
        }
        string l ="",r="";
        for(int i=0;i<=f1;i++)   l.push_back(s[i]);
        for(int i=f0;i<n;i++)   r.push_back(s[i]);
       // cout << f0 << ' ' << f1 << endl;
        if(f0-f1>=2)
        {
            l.push_back('0');
        }
        string res = "";
      //  cout << f0 << ' ' << f1 << endl;
        res = l+r;
        cout << res << endl;
    }
    return 0;
}



