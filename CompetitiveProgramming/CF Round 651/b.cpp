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
        deque<int>even,odd;
        for(int i=0;i<2*n;i++)
        {
            int x;
            cin >> x;
            if(x%2==0)  even.push_back(i+1);
            else        odd.push_back(i+1);
        }
        if(even.size()%2==0 and odd.size()%2==0 and odd.size()>=2)
        {
            odd.pop_front();
            odd.pop_front();
        }
        else
        {
            if(odd.size()%2==1)
            {
                odd.pop_front();
                even.pop_front();
            }
            else
            {
                if(odd.size()>=2)
                {
                    odd.pop_front();
                    odd.pop_front();
                }
                else
                {
                    even.pop_front();
                    even.pop_front();
                }
            }
        }
        while(even.size())
        {
             cout << even.front() ;
             even.pop_front();
             cout << ' ' << even.front() << endl ;
             even.pop_front();
        }
        while(odd.size())
        {
            cout << odd.front();
            odd.pop_front();
            cout << ' ' << odd.front() << endl;
            odd.pop_front();
        }
    }
    return 0;
}



