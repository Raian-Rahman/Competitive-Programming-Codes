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
        long long n;
        cin >> n;
        long long a[n+7];
        long long b[n+7];
        for(long long i=0;i<=n;i++)
        {
            cin >> a[i];
        }
        for(long long i=0;i<n;i++)    cin >> b[i];
        long long sum=0;
        for(long long i=0;i<n;i++)
        {
            sum+= min(b[i],a[i]);
            b[i]-= min(b[i],a[i]);
            sum+= min(b[i],a[i+1]);
            a[i+1]-=min(a[i+1],b[i]);
            b[i]-= min(b[i],a[i]);

        }
        cout << sum << endl;
    }
    return 0;
}

