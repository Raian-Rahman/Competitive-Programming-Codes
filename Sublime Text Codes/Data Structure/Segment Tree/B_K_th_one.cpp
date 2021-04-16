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
    long long count,indexNo;
}items[1000077];

int arr[1000077];

void buildSegmentTree(long long node, long long l, long long r)
{
    if (l == r)
    {
        long long newValue = arr[r];
        if (newValue > 0)
        {
            items[node].count = 1;
            items[node].indexNo = r;
        }
        else
        {
            items[node].count = 0;
            items[node].indexNo = r;
        }
        return;
    }
    long long left = (node * 2);
    long long right = (node * 2) + 1;
    long long mid = (l + r) / 2;
    buildSegmentTree(left, l, mid);
    buildSegmentTree(right, mid + 1, r);
    items[node].count     = items[left].count + items[right].count;
}

void update(long long node, long long l, long long r, long long index)
{
    if (index < l or index > r)
        return;
    if (l >= index and r <= index)
    {
        long long newValue = arr[r];
        arr[r] = !arr[r];
        if (newValue == 0)
        {
            items[node].count = 1;
        }
        else
        {
            items[node].count = 0;
        }
        return;
    }
    long long left = node * 2;
    long long right = node * 2 + 1;
    long long mid = (l + r) / 2;
    update(left, l, mid, index);
    update(right, mid + 1, r, index);
    items[node].count     = items[left].count + items[right].count;
}

long long query(long long node, long long l, long long r,long long value)
{
    //cout << l << ' ' << r <<  ' ' << i << ' ' <<  j << endl;
    //cout << node << ' ' << l << ' ' << r  << endl;
    if(l==r)    return items[node].indexNo;
    else
    {
        long long left = 2*node;
        long long right = 2*node + 1 ;
        long long mid = (l+r)/2;
        //cout << items[left].count << ' ' << value << endl;
        if(items[left].count>=value)    
        {
            //cout << "ekhane\n";
            return query(left,l,mid,value);
        }
        else
        {
            /* code */
            return query(right,mid+1,r,value-items[left].count);
        }
        
    }
}


int main()
{
    //O_O;
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
        while (m--)
        {
            //for(int i=1;i<=3*n;i++)    
            //{
            //    cout << i << ' ' <<  items[i].indexNo << ' ' << items[i].count;
            //    cout << endl;
            //}
            int choice;
            cin >> choice;
            if(choice==1)
            {
                long long index, value;
                cin >> index;
                index++;
                update(1, 1, n, index);
            }
            else 
            {
                long long index;
                cin >> index ;
                index++;
                cout << query(1,1,n,index)-1ll << endl;
            }
            
        }
    }
    return 0;
}