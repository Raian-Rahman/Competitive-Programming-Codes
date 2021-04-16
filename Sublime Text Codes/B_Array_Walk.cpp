//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

#define O_O                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define MOD 1000000007

inline void normal(long long &a)
{
    a %= MOD;
    (a < 0) && (a += MOD);
}
inline long long modMul(long long a, long long b)
{
    normal(a), normal(b);
    return (a * b) % MOD;
}
inline long long modAdd(long long a, long long b)
{
    normal(a), normal(b);
    return (a + b) % MOD;
}
inline long long modSub(long long a, long long b)
{
    normal(a), normal(b);
    a -= b;
    normal(a);
    return a;
}
inline long long modPow(long long b, long long p)
{
    long long r = 1;
    while (p)
    {
        if (p & 1)
            r = modMul(r, b);
        b = modMul(b, b);
        p >>= 1;
    }
    return r;
}
inline long long modInverse(long long a) { return modPow(a, MOD - 2); }
inline long long modDiv(long long a, long long b) { return modMul(a, modInverse(b)); }

int main()
{
    O_O;
    long long tt = 1;
    cin >> tt;
    long long T = tt;
    while (tt--)
    {
        //write your code here
        long long n, k, z;
        cin >> n >> k >> z;
        long long arr[n + 5];
        for (long long i = 0; i < n; i++)
            cin >> arr[i];
        long long cum[n + 5];
        cum[0] = arr[0];
        for (long long i = 1; i < n; i++)
            cum[i] = cum[i - 1] + arr[i];
        
        long long curA = arr[0], curB = arr[1], sum = 0, maxSum = 0, koybar = 0;
        
        for (long long i = 1, j = 1; j <= k; i++, j++)
        {
            curA = arr[i - 1];
            curB = arr[i];
            long long remTurn = ((k - j) / 2);
            long long f = min(remTurn, z);
            if (remTurn >= z)
            {
                long long sum1 = z * curA + z * curB;
                long long pp = k - j - (2 * z);
                sum = cum[min(n - 1, j + pp)] + sum1;
                //cout << "ekhane sum : " << sum << endl;
            }
            else
            {
                //cout << "ekhane dhukse " << i << ' ' << j << endl ;
                long long sum1 = f * curA + f * curB;
                if ((k - j) % 2 and z)
                    sum1 += max(curA,arr[i+1]);
                sum = cum[i] + sum1;
                //cout << cum[i] << ' ' << sum1 << endl;
                //cout << "ekhane porerTay sum : " << i << ' ' << j << ' ' << f << ' ' << sum << endl;
            } 
            //cout << sum << ' ' << maxSum << endl;
            maxSum = max(maxSum, sum);
        }
        cout << maxSum << endl;
    }
    return 0;
}