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
        long long n;
        string s;
        cin >> n >> s;
        long long fPlayer = 0;
        if(s=="Dum")    fPlayer = 1;
        vector<string>v;
        for(long long i=0; i<n; i++)
        {
            string str;
            cin >> str;
            v.push_back(str);
        }
        long long s0=0,s1=0;
        for(long long i=0;i<v.size();i++)
        {
            string str = v[i];
            char xx = str[0];
            long long flag = 0;
            double cur=1.0;
            for(long long j=0;j<str.size();j++)
            {
                if(xx=='0' and str[j]==xx)  s0++;
                else if(xx=='1' and str[j]==xx)                       s1++;
            }
        }
       // cout << s1 << ' ' << s0 << endl;
        if(s0>s1)   cout << "Dee\n";
        else if(s1>s0)        cout << "Dum\n";
        else
        {
            if(fPlayer==1)  cout << "Dee\n";
            else            cout << "Dum\n";
        }
    }
    return 0;
}


