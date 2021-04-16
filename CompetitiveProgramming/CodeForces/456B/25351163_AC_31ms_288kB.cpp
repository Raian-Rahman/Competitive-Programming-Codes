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


int pow(int x,int y)
{
    int rep = 1;
    for(int i=0;i<y;i++)    rep*=x;
    return rep;
}

int main()
{
    O_O;
    long long t=1;
    //cin >> t;
    long long T = t;
    int v3[]={1,3,4,2};
    int v2[]={1,2,4,3};
    int v1[]={1,1,1,1};
    int v4[]={1,4,1,4};
    while(t--)
    {
        string s;
        cin >> s;
        if(s.size()==1)
        {
            int x = s[0]-48;
            cout << (pow(2,x)%5 + pow(3,x)%5 + pow(4,x)%5 + 1)%5  << endl;
            return 0;
        }
        int n = s.size();
        int p = s[s.size()-1]-48;
        int sum = 1;
        sum += v4[p%2];
        int x = (s[s.size()-2]-48)*10 + (s[s.size()-1]-48);
        sum+= v2[x%4] + v3[x%4];
        cout << sum%5 << endl;
    }
    return 0;
}



