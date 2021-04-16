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
    O_O;
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long arr[n+3];
        long long sum=0;
        for(long long i=0;i<n;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        long long avg = sum/n;
        long long rem = sum%n;
        long long cnt=0;
        sort(arr,arr+n);
        reverse(arr,arr+n);
        //cout << avg << ' ' << rem << endl;
        for(long long i=0;i<n;i++)
        {
            if(i<rem)   cnt+= abs((arr[i]-avg-1));
            else        cnt+= abs(avg-arr[i]);
        }
        cout << cnt/2 << endl;
    }
    return 0;
}

