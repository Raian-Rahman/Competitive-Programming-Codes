//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
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
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    long long t = 1;
    cin >> t;
    long long T =t;
    while (t--)
    {
        //cout << "hello world!" << endl;
        //write your code here
        long long x,y,n;
        cin >> x >> y >> n;
        int p = n/x;
        int q = p*x;
        if(q+y>n)   cout << (p-1)*x + y << endl;
        else        cout << q+y << endl;
    }
    return 0;
}


