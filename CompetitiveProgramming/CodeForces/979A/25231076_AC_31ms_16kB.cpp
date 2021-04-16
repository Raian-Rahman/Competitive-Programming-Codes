//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#define O_o ios_base::sync_with_stdio(0)
#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define o_O ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define fixedprecision(n) cout<<fixed<<setprecision(n)
#define endl '\n'
#define CASE(n) cout << "Case " << n << ":\n"
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl
int main()
{
    O_O;
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {
        long long n;
        cin >>n;
        if(n==0)    cout << 0 << endl;
        else if(n==1)   cout << 1 << endl;
        else
        {
            if(n%2==0)
            {
                cout << n+1 << endl;
            }
            else
            {
                cout << (n+1)/2 << endl;
            }
        }
    }
    return 0;
}

