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
    while(t--)
    {
        //write your code here
        for(int i =703; i<1000; i++)
        {
            long long n;
            n=i;
            string s = "abcdefghijklmnopqrstuvwxyz";
            string temp = "";
            long long p=26;
            while(n)
            {
                n--;
                long long res = (n)%26;
                n/=p;
                temp.push_back(s[res]);
                // cout << n << endl;
            }
            reverse(temp.begin(),temp.end());
            cout << temp << endl;
        }
    }
    return 0;
}



