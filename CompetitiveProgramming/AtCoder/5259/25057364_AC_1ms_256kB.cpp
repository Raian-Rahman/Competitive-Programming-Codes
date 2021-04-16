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
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {
        long long n,k,m;
        cin >> n >> k >> m;
        long long sum=0,p;
        for(long long i=0;i<n-1;i++)
        {
            cin >> p;
            sum+=p;
        }
        if(((n*m)-sum)<=k)  cout << max(0LL,(n*m)-sum) << endl;
        else                cout << -1 << endl;
    }
    return 0;
}

