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
    freopen("inputb.in", "r", stdin);
    freopen("outputb.out", "w", stdout);
#endif
    long long t = 1;
    //cin >> t;
    long long T =t;
    while (t--)
    {
        cout << t << endl;
        //cout << "hello world!" << endl;
        //write your code here
        long long n;
        cin >> n; 
        int f=0,cnt=0;
        if(n==1)    cout << 0 << endl;
        else if(n==2)   cout << -1 << endl;
        else 
        {
            while(n!=1 and !f)
            {
                cout << "hello world!" << endl;
                if(n%6==0)
                {
                    n/=6;
                    cnt++;
                }
                else if(n%3==0)
                {
                    n*=2;
                    cnt++;
                }
                else 
                {
                    f=-1;
                }
            }
        }
        if(f==0)    cout << cnt << endl;
        else        cout << -1 << endl;
    }
    return 0;
}


