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

int ncr(int n,int r)
{
     long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}



int main()
{
    O_o;
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {
        long long n,m;
        cin >> n >> m;
        map<long long,long long>mp;
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin >> x;
            mp[x]++;
        }
        long long sum=0,used=0;
        for(long long i=1;i<=m;i++)
        {
            long long a = mp[i];
            used+=a;
            sum+= (a*(n-used));
        }
        cout << sum <<endl;
    }
    return 0;
}

