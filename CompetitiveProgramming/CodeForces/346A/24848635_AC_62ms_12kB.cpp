//coded by: pranonraian-------------------------------------
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
        long long mx = -1LL;
        long long arr[n+3];
        for(long long i=0;i<n;i++)
        {
            cin >> arr[i];
            mx = max(arr[i],mx);
        }
        long long gcd = arr[0];
        for(long long i=1;i<n;i++)  gcd = __gcd(arr[i],gcd);
        long long nor = (mx/gcd)-n;
        if(nor%2==1)    cout << "Alice\n";
        else            cout << "Bob\n";
    }
    return 0;
}

