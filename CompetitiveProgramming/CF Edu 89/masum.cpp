#include <bits/stdc++.h>

using namespace std;

typedef long long               ll;
typedef long double             ld;

#define min3(a, b, c)           min((a), min((b), (c)))
#define max3(a, b, c)           max((a), max((b), (c)))
#define lcm(a,b)                (a / __gcd(a,b) ) *b
#define gcd(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define sqr(a)                  ((a)*(a))
#define urs(r...)               typename decay<decltype(r)>::type
#define FOR(i,a,b)              for(urs(b) i=a;i<b;i++)
#define ROF(i,a,b)              for(urs(b) i=a;i>=b;i--)
#define REP(a,b)                for(urs(b) i=a;i<b;i++)
#define pb                      push_back
#define mk                      make_pair
#define ff                      first
#define ss                      second
#define lb                      lower_bound
#define ub                      upper_bound
#define all(a)                  a.begin(),a.end()
#define vi                      vector <int>
#define pi                      pair <int, int>
#define SORT(v)                 sort(v.begin(), v.end());
#define FASTIO                  ios_base::sync_with_stdio(0);cin.tie(NULL);
#define PI                      acos(-1.0)
#define nl                      "\n"
const int MOD = 1e9 + 7;

ll fast_pow (ll n, ll p)
{
    ll res=1;
    while (p>0)
    {
        if (p&1)
            res = res * n;
        p = p>>1;
        n = n * n;
    }
    return res;
}

ll BMod(ll B,ll P,ll M)
{
    ll R=1;
    B=B%M;
    while(P)
    {
        if(P&1)
            R=(R*B)%M;
        P >>= 1;
        B=(B*B)%M;
    }
    return R;
}

ll invMOD(ll num,ll M)
{
    return BMod(num,M-2,M);
}

//use this, if overflow happens
uint64_t mulmod(uint64_t a, uint64_t b, uint64_t m)
{
    if (a > b)
        swap (a, b);

    uint64_t res = 0;
    uint64_t temp_b;

    if (b >= m)
    {
        if (m > UINT64_MAX / 2u)
            b -= m;
        else
            b %= m;
    }

    while (a != 0)
    {
        if (a & 1)
        {
            if (b >= m - res)
                res -= m;
            res += b;
        }
        a >>= 1;

        temp_b = b;
        if (b >= m - b)
            temp_b -= m;
        b += temp_b;
    }
    return res;
}

#ifdef Sieve
const int pSz = 10000009;
bool np[pSz + 10]; vi prime; int prime_size;
void sieve(){np[0] = np[1] = 1;prime.pb(2);
for(ll i = 4; i <= pSz; i+=2) np[i] = 1;
for(ll i = 3; i <= pSz; i+=2){if(!np[i]){prime.pb(i);
for(ll j = i * i; j <= pSz; j += (i << 1)) np[j] = 1;}}prime_size = prime.size();}
#endif

#ifdef Combi
const int nSz = 2000006;
ll F[nSz + 1], tMod = MOD;
void Factorial(){ F[0] = 1; for(int i = 1; i <= nSz; i++) F[i] = (F[i - 1] * i) % tMod; }
inline ll nCr(int n, int r) { if(n < r) return 0; return (F[n] * invMOD((F[n - r] * F[r]) % tMod, tMod)) % tMod; }

#endif

#ifdef Z_Algo
void zAlgo(char *s, int *z){
    int L, R, sz; sz = strlen(s); z[0] = L = R = 0;
    FOR(i, 1, sz) { z[i] = 0; if(i <= R) z[i] = min(z[i - L], R - i + 1);
    while(i + z[i] < sz && s[i + z[i]] == s[z[i]]) z[i]++; if(i + z[i] - 1 > R) L = i, R = i + z[i] - 1; }
}void zAlgo(string &s, int *z){
    int L, R, sz; sz = s.size(); z[0] = L = R = 0;
    FOR(i, 1, sz) { z[i] = 0; if(i <= R) z[i] = min(z[i - L], R - i + 1);
    while(i + z[i] < sz && s[i + z[i]] == s[z[i]]) z[i]++; if(i + z[i] - 1 > R) L = i, R = i + z[i] - 1; }
}void zAlgo(int *s, int *z, int n){
    int L, R, sz; sz = n; z[0] = L = R = 0;
    FOR(i, 1, sz) { z[i] = 0; if(i <= R) z[i] = min(z[i - L], R - i + 1);
    while(i + z[i] < sz && s[i + z[i]] == s[z[i]]) z[i]++; if(i + z[i] - 1 > R) L = i, R = i + z[i] - 1; }
}
#endif


//////////////////////////////////////////////////////////////////////////////
///                           M. K. BASHAR                                 ///
///                            IUT CSE'18                                  ///
//////////////////////////////////////////////////////////////////////////////

#define MAXN   10000001
int spf[MAXN];
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;

    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (int i=3; i*i<MAXN; i++)
        if (spf[i] == i)
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
}

set<int> getFactorization(int x)
{
    set<int> ret;
    while (x != 1)
    {
        ret.insert(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

int main()
{
    FASTIO

    sieve();

    int n, buf;
    cin >> n;
    pair<int, int> ans[n+10];
    REP (0, n)
    {
        cin >> buf;
        auto fac = getFactorization(buf);
        int sz = fac.size();
        if (sz == 1)
        {
            ans[i] = {-1, -1};
        }
        else
        {
            bool flag = false;

            for (auto x: fac)
            {
                int now = buf;
                while (now%x == 0)
                    now /= x;
                if (now!=1)
                {
                    ans[i] = {x, now};
                    flag = true;
                    break;
                }
            }

            if (!flag)
                ans[i] = {-1, -1};
        }
    }

    REP (0, n)
        cout << ans[i].ff << " ";
    cout << endl;
    REP (0, n)
        cout << ans[i].ss << " ";

    return 0;
}
