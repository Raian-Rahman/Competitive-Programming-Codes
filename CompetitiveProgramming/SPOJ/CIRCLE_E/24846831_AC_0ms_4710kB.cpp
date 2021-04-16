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
#define CASE(n) cout << "Case " << n << ": "
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl
int main()
{
    O_O;
    long long t=1;
    cin >> t;
    long long T=t;
    while(t--)
    {
        double r1,r2,r3;
        cin >> r1 >> r2 >> r3;
        double x = ((r1*r2)+(r2*r3)+(r3*r1)+(2*sqrt(r1*r2*r3*(r1+r2+r3))));
        fixedprecision(8);
        cout << (r1*r2*r3)/x << endl;
    }
    return 0;
}

