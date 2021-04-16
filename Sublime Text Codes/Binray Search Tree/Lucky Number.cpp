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
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long t=1;
    cin >> t;
    long long T = t;
    ordered_set st;
    int n = 8000000;
    for(int i=1;i<=n;i+=2)
    {
        st.insert(i);
    }
    for(int i=1;i<1000007;i++)
    {
        if(i>=st.size())    cout << "mara khaise\n";
        auto it = st.find_by_order(i);
        st.erase(it);
    }
    cout << endl;
    while(t--)
    {
        //write your code here
        int n;
        cin >> n;
        n--;
        cout << *st.find_by_order(n) << endl;
    }
    return 0;
}


