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

int tree[4*100000];

void init_tree(int node,int be,int en)
{
   // cout << be << ' ' << en << endl;
    if(be==en)
    {
        tree[node]=1;
        return ;
    }

    int left = node*2;
    int right = (2*node)+1;
    int mid = be+en;
    mid/=2;
    init_tree(left,be,mid);
    init_tree(right,mid+1,en);
    tree[node]=tree[left]+tree[right];
}

int query(int node, int be, int en, int value)  //carry used to pass the propagated value
{
    //cout << node << endl;
    if(be==en) // range ta node range er che boro
        return en;
    int left = 2*node;
    int right = (2*node) +1;

    int mid = be+en;
    mid/=2;
    if(tree[right]>=value)
    {
        return query(right,mid+1,en,value);
    }
    else 
    {
        return query(left,be,mid,value-tree[right]);
    }
}

void update(int node,int be,int en,int i)
{
 //   cout << be << ' ' << en << endl;
    if(i>en or i<be)    return;
    if(be==i and en==i)
    {
        tree[node]=0;
        return;
    }
    int left = 2*node;
    int right = (2*node)+1;
    int mid=be+en;
    mid/=2;
    update(left,be,mid,i);
    update(right,mid+1,en,i);
    tree[node]=tree[left]+tree[right];
}


int main()
{
    O_O;
    //cout << "done\n";
    //cout << "done\n";
    int n;
    cin >> n;
    int arr[n+5];
    for(int i=0;i<n;i++)    cin >> arr[i];
    init_tree(1,1,n);
    for(int j=n-1;j>=0;j--)
    {
        int value = arr[j];
        int x = query(1,1,n,n-value+1);
        cout << x << ' ';
        update(1,1,n,x);
        //for(int i=1;i<=3*n;i++) cout << tree[i] << ' ';
        //cout << endl;
    }
    
    //for(int i=1;i<n;i++)    cout << tree[i] << ' ';
    return 0;
}