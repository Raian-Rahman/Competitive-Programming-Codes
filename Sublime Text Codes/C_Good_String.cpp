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

int max(int x, int y) { return (x > y) ? x : y; }

int lps(string seq, int i, int j)
{
    if (i == j)
        return 1;

    if (seq[i] == seq[j] && i + 1 == j)
        return 2;

    if (seq[i] == seq[j])
        return lps(seq, i + 1, j - 1) + 2;

    return max(lps(seq, i, j - 1), lps(seq, i + 1, j));
}

int main()
{
    O_O;
    long long tt = 1;
    cin >> tt;
    long long T = tt;
    while (tt--)
    {
        //write your code here
        string s;
        cin >> s;
        int sz = s.size(); 
        cout << sz - lps(s, 0, s.size()) << endl;
    }
    return 0;
}