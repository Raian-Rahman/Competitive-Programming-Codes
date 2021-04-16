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
    O_o;
    long long t;
    cin >> t;
    long long T=t;
    while(t--)
    {
        long long n;
        cin >> n;
        CASE(T-t);
        if(n%9==0)  cout << n+(n/9)-1 << ' ' << n+ (n/9) << endl;
        else        cout << n+(n/9) << endl;
    }
    return 0;
}


