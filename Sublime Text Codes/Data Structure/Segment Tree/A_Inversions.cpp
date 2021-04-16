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
        tree[node]=0;
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

int query(int node, int be, int en, int i,int j)  //carry used to pass the propagated value
{
    if(i>en or j<be)  return 0; //out of range
    if(be>=i and en<=j) // range ta node range er che boro
        return tree[node];
    int left = 2*node;
    int right = (2*node) +1;

    int mid = be+en;
    mid/=2;

    int left_subtree_result = query(left,be,mid,i,j);
    int right_subtree_result = query(right,mid+1,en,i,j);
    return left_subtree_result+right_subtree_result;
}

void update(int node,int be,int en,int i)
{
 //   cout << be << ' ' << en << endl;
    if(i>en or i<be)    return;
    if(be==i and en==i)
    {
        tree[node]=1;
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
    init_tree(1,1,100005);
    //cout << "done\n";
    int n;
    cin >> n;
    for(int j=0;j<n;j++)
    {
        int value;
        cin >> value;
        cout << query(1,1,n,value+1,n+10) << ' ';
        update(1,1,n,value);
        //for(int i=1;i<=3*n;i++) cout << tree[i] << ' ';
        //cout << endl;
    }
    
    //for(int i=1;i<n;i++)    cout << tree[i] << ' ';
    return 0;
}