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

struct item{
    long long segment,suffix,prefix,sum;
}items[1000077];
int arr[1000077];

void buildSegmentTree(long long node, long long l, long long r)
{
    if (l == r)
    {
        long long newValue = arr[r];
        if (newValue > 0)
        {
            items[node].prefix = newValue;
            items[node].suffix = newValue;
            items[node].segment = newValue;
            items[node].sum = newValue;
            
        }
        else
        {
            items[node].prefix = 0;
            items[node].suffix = 0;
            items[node].segment = 0;
            items[node].sum = newValue;
        }
        return;
    }
    long long left = (node * 2);
    long long right = (node * 2) + 1;
    long long mid = (l + r) / 2;
    buildSegmentTree(left, l, mid);
    buildSegmentTree(right, mid + 1, r);
    items[node].segment = max({items[left].segment, items[right].segment, items[left].suffix + items[right].prefix});
    items[node].prefix  = max(items[left].prefix, items[left].sum + items[right].prefix);
    items[node].suffix  = max(items[right].suffix, items[right].sum + items[left].suffix);
    items[node].sum     = items[left].sum + items[right].sum;
}

void update(long long node, long long l, long long r, long long index, long long newValue)
{
    if (index < l or index > r)
        return;
    if (l >= index and r <= index)
    {
        if (newValue > 0)
        {
            items[node].prefix = newValue;
            items[node].suffix = newValue;
            items[node].segment = newValue;
            items[node].sum = newValue;
            
        }
        else
        {
            items[node].prefix = 0;
            items[node].suffix = 0;
            items[node].segment = 0;
            items[node].sum = newValue;
        }
        return;
    }
    long long left = node * 2;
    long long right = node * 2 + 1;
    long long mid = (l + r) / 2;
    update(left, l, mid, index, newValue);
    update(right, mid + 1, r, index, newValue);
    items[node].segment = max({items[left].segment, items[right].segment, items[left].suffix + items[right].prefix});
    items[node].prefix  = max(items[left].prefix, items[left].sum + items[right].prefix);
    items[node].suffix  = max(items[right].suffix, items[right].sum + items[left].suffix);
    items[node].sum     = items[left].sum + items[right].sum;
}

item query(long long node, long long l, long long r, long long i, long long j)
{
    //cout << l << ' ' << r <<  ' ' << i << ' ' <<  j << endl;
    if(i>r or j<l)  
    {
        return {0,0,0,0};
    }
    else if(l>=i and r<=j)  return items[node];
    else 
    {
        long long left = node*2;
        long long right = node*2 + 1;
        long long mid = (l+r)/2;
        items[node].segment = max({items[left].segment, items[right].segment, items[left].suffix + items[right].prefix});
        items[node].prefix  = max(items[left].prefix, items[left].sum + items[right].prefix);
        items[node].suffix  = max(items[right].suffix, items[right].sum + items[left].suffix);
        items[node].sum     = items[left].sum + items[right].sum;
        return items[node];
    }
}


int main()
{
    O_O;
    long long tt = 1;
    //cin >> tt;
    long long T = tt;
    while (tt--)
    {
        //write your code here
        long long n, m;
        cin >> n >> m;
        for (long long i = 1; i <= n; i++)
            cin >> arr[i];
        buildSegmentTree(1, 1, n);
        cout << query(1,1,n,1,n).segment << endl;
        while (m--)
        {
            long long index, value;
            cin >> index >> value;
            index++;
            update(1, 1, n, index, value);
            cout << query(1,1,n,1,n).segment << endl;
        }
    }
    return 0;
}