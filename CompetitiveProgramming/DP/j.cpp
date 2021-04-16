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
        string s;
        cin >> s;
        int f=0;
        for(int i=-0;i<s.size();i++)
        {
            if(s[i]>='7' or f)    s[i]='7';
            else
            {
                f=0;
                if(s[i]<'7' and s[i]>='5')  s[i]='5';
                else if(s[i]<'5' and s[i]<='3') s[i]='3';
                else            s[i]='2';
            }
        }
        cout << s << endl;
    }
    return 0;
}



