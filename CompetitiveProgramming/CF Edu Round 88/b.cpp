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
        int x,y,n,m;
        cin  >> n >> m >> x >> y;
        int ch;
        if(2*x<=y)   ch=1;
        else         ch=0;
        char arr[n+5][m+5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> arr[i][j];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)   arr[i][m]='*';
       // cout << ch << endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]=='.' and ch and arr[i][j+1]=='.')   cnt+=2*x,j++;
                else if(arr[i][j]=='.' and arr[i][j+1]=='.')    cnt+=y,j++;
                else if(arr[i][j]=='.')     cnt+=x;

            }
        //    cout << cnt << endl;
        }
        cout << cnt << endl;
    }
    return 0;
}



