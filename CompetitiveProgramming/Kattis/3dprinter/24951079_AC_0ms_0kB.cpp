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

long long pw(long long b,long long p)
{
    long long r =1;
    for(int i=0;i<p;i++)
    {
        r*=b;
    }
    return r ;
}
int main()
{
    O_O;
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long x = log2(n);
        long long p = pw(2,x);
        if(n==p)    cout << x+1 << endl;
        else        cout << x+2 << endl;
    }
    return 0;
}

