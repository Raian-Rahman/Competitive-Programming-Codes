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
long long countTree[3*100077];

void buildSegmentTree(long long node, long long l, long long r)
{
    if(l==r)
    {
        tree[node] = arr[r];
        countTree[node] = 1;
        return;
    }
    long long left = (node*2);
    long long right = (node*2)+1;
    long long mid =  (l+r)/2;
    buildSegmentTree(left,l,mid);
    buildSegmentTree(right,mid+1,r);
    tree[node] = min(tree[left],tree[right]);
    if(tree[left]<tree[right])      countTree[node] = countTree[left];
    else if(tree[left]>tree[right]) countTree[node] = countTree[right];
    else                            countTree[node] = countTree[right] + countTree[left];
}

void update(long long node,long long l, long long r, long long index, long long newValue)
{
    if(index < l or index>r)  return ;
    if(l>=index and r<=index)
    {
        tree[node] = newValue;
        return;
    }
    long long left = node*2;
    long long right = node*2 + 1;
    long long mid = (l+r)/2;
    update(left,l,mid,index,newValue);
    update(right,mid+1,r,index,newValue);
    tree[node] = min(tree[left],tree[right]);
    if(tree[left]<tree[right])      countTree[node] = countTree[left];
    else if(tree[left]>tree[right]) countTree[node] = countTree[right];
    else                            countTree[node] = countTree[right] + countTree[left];
}

long long query(long long node, long long l, long long r, long long i, long long j)
{
    //cout << l << ' ' << r <<  ' ' << i << ' ' <<  j << endl;
    if(i>r or j<l)  return INT_MAX;
    else if(l>=i and r<=j)  return tree[node];
    else 
    {
        long long left = node*2;
        long long right = node*2 + 1;
        long long mid = (l+r)/2;
        return min(query(left,l,mid,i,j) ,query(right,mid+1,r,i,j));
    }
}

long long query2(long long node, long long l, long long r, long long i, long long j)
{
    //cout << l << ' ' << r <<  ' ' << i << ' ' <<  j << endl;
    if(i>r or j<l)  return INT_MAX;
    else if(l>=i and r<=j)  return countTree[node];
    else 
    {
        long long left = node*2;
        long long right = node*2 + 1;
        long long mid = (l+r)/2;
        int lRes = query(left,l,mid,i,j);
        int rRes = query(right,mid+1,r,i,j);
        int q1 = query2(left,l,mid,i,j);
        int q2 = query2(right,mid+1,r,i,j);
        if(lRes<rRes)      return q1;
        else if(lRes>rRes) return  q2;
        else               return q1+q2;
    }
}



int main()
{
    //O_O;
    long long tt=1;
    //cin >> tt;
    long long T = tt;
    while(tt--)
    {
        memset(arr,0,sizeof(arr));
        memset(tree,0,sizeof(tree));
        //write your code here
        long long n,m;
        cin >> n >> m;
        for(long long i=1;i<=n;i++)
        {
            cin >> arr[i];
        }
        buildSegmentTree(1,1,n);
        for(long long i=0;i<m;i++)
        {
            long long choice;
            cin >> choice;
            if(choice==1)
            {
                long long value,index;
                cin >> index >>  value ;
                update(1,1,n,index+1,value);
            }
            else 
            {
                long long x,y;
                cin >> x >> y;
                long long p1 = query(1,1,n,x+1,y);
                long long p2 = query2(1,1,n,x+1,y);
                cout << p1 << ' ' << p2 << endl;
            }
            //for(long long i=1;i<3*n;i++)  cout << countTree[i] << ' ';
            //cout << endl;
        }
    }
    return 0;
}