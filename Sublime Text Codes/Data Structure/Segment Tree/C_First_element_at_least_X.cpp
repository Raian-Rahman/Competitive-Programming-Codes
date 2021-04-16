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
    long long maximumValue,indexNo;
}items[1000077];

int arr[1000077];

void buildSegmentTree(long long node, long long l, long long r)
{
    if (l == r)
    {
        long long newValue = arr[r];
        items[node].maximumValue = newValue;
        items[node].indexNo = r;
        return;
    }
    long long left = (node * 2);
    long long right = (node * 2) + 1;
    long long mid = (l + r) / 2;
    buildSegmentTree(left, l, mid);
    buildSegmentTree(right, mid + 1, r);
    items[node].maximumValue     = max(items[left].maximumValue , items[right].maximumValue);
}

void update(long long node, long long l, long long r, long long index,long long newValue)
{
    if (index < l or index > r)
        return;
    if (l >= index and r <= index)
    {
        items[node].maximumValue = newValue;
        return;
    }
    long long left = node * 2;
    long long right = node * 2 + 1;
    long long mid = (l + r) / 2;
    update(left, l, mid, index,newValue);
    update(right, mid + 1, r, index,newValue);
    items[node].maximumValue     = max(items[left].maximumValue , items[right].maximumValue);
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
        //cout << items[left].maximumValue << ' ' << value << endl;
        if(items[left].maximumValue>=value)    
        {
            //cout << "ekhane\n";
            return query(left,l,mid,value);
        }
        else
        {
            /* code */
            return query(right,mid+1,r,value);
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
            //    cout << i << ' ' <<  items[i].indexNo << ' ' << items[i].maximumValue;
            //    cout << endl;
            //}
            int choice;
            cin >> choice;
            if(choice==1)
            {
                long long index, value;
                cin >> index >> value;
                index++;
                update(1, 1, n, index,value);
            }
            else 
            {
                long long index;
                cin >> index ;
                if(items[1].maximumValue<index)  cout << -1 << endl;
                else 
                {
                    cout << query(1,1,n,index)-1 << endl;
                }
            }
            
        }
    }
    return 0;
}