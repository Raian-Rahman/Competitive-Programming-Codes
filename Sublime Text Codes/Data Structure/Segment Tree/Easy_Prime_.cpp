//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;


#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define MOD 1000000007

inline void normal(long long &a) { a %= MOD; (a < 0) && (a += MOD); }
inline long long modMul(long long a, long long b) { normal(a), normal(b); return (a*b)%MOD; }
inline long long modAdd(long long a, long long b) { normal(a), normal(b); return (a+b)%MOD; }
inline long long modSub(long long a, long long b) { normal(a), normal(b); a -= b; normal(a); return a; }
inline long long modPow(long long b, long long p) { long long r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline long long modInverse(long long a) { return modPow(a, MOD-2); }
inline long long modDiv(long long a, long long b) { return modMul(a, modInverse(b)); }

long long arr[100077];
long long tree[3*100077];
bool isPrime[10000077];

void buildSegmentTree(long long node, long long l, long long r)
{
    if(l==r)
    {
        if(isPrime[arr[r]]==1)
            tree[node] = 1;
        else tree[node] = 0;
        return;
    }
    long long left = (node*2);
    long long right = (node*2)+1;
    long long mid =  (l+r)/2;
    buildSegmentTree(left,l,mid);
    buildSegmentTree(right,mid+1,r);
    tree[node] = tree[left]+tree[right];
}

void update(long long node,long long l, long long r, long long index, long long newValue)
{
    if(index < l or index>r)  return ;
    if(l>=index and r<=index)
    {
        arr[r] = newValue;
        if(isPrime[newValue]==1)
            tree[node] = 1;
        else tree[node] = 0;
        return;
    }
    long long left = node*2;
    long long right = node*2 + 1;
    long long mid = (l+r)/2;
    update(left,l,mid,index,newValue);
    update(right,mid+1,r,index,newValue);
    tree[node] = tree[left]+tree[right];
}

long long query(long long node, long long l, long long r, long long i, long long j)
{
    //cout << l << ' ' << r <<  ' ' << i << ' ' <<  j << endl;
    if(i>r or j<l)  return 0;
    else if(l>=i and r<=j)  return tree[node];
    else 
    {
        long long left = node*2;
        long long right = node*2 + 1;
        long long mid = (l+r)/2;
        return query(left,l,mid,i,j) + query(right,mid+1,r,i,j);
    }
}



void sieve()
{
    memset(isPrime,1,sizeof(isPrime));
    isPrime[1] = 0;
    isPrime[0] = 0;
    for(int i=4;i<=10000050;i+=2)   isPrime[i] = 0;
    for(int i=3;i*i<=10000050;i+=2)
    {
        if(isPrime[i]==1)
        {
            for(int j=i*i;j<=10000050;j+=i)
            {
                isPrime[j] = 0;
            }
        }
    }
    //for(int i=0;i<=100;i++)
    //{
    //    if(isPrime[i])  cout << i << ' ';
    //}
    //cout << endl;
}

int main()
{
    O_O;
    sieve();
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)    cin >> arr[i];
    buildSegmentTree(1,1,n);
    int q;
    cin >> q;
    while(q--)
    {
        int choice;
        cin >> choice;
        if(choice==2)
        {
            int index,value;
            cin >> index >> value;
            update(1,1,n,index,value);
        }
        else 
        {
            int l,r;
            cin >> l >> r;
            cout << query(1,1,n,l,r) << endl;
        }
    }
    return 0;
}