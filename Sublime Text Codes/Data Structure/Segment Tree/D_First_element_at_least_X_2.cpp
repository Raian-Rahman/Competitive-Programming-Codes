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

inline void normal(int &a)
{
    a %= MOD;
    (a < 0) && (a += MOD);
}
inline int modMul(int a, int b)
{
    normal(a), normal(b);
    return (a * b) % MOD;
}
inline int modAdd(int a, int b)
{
    normal(a), normal(b);
    return (a + b) % MOD;
}
inline int modSub(int a, int b)
{
    normal(a), normal(b);
    a -= b;
    normal(a);
    return a;
}
inline int modPow(int b, int p)
{
    int r = 1;
    while (p)
    {
        if (p & 1)
            r = modMul(r, b);
        b = modMul(b, b);
        p >>= 1;
    }
    return r;
}
inline int modInverse(int a) { return modPow(a, MOD - 2); }
inline int modDiv(int a, int b) { return modMul(a, modInverse(b)); }
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////



struct item{
    int maximumValue,minimumOIndexNo,maximumIndexNo;
}items[1000077];

int arr[1000077];

void buildSegmentTree(int node, int l, int r)
{
    if (l == r)
    {
        int newValue = arr[r];
        items[node].maximumValue = newValue;
        items[node].minimumOIndexNo = r;
        items[node].maximumIndexNo = r;
        return;
    }
    int left = (node * 2);
    int right = (node * 2) + 1;
    int mid = (l + r) / 2;
    buildSegmentTree(left, l, mid);
    buildSegmentTree(right, mid + 1, r);
    items[node].maximumValue     = max(items[left].maximumValue , items[right].maximumValue);
    items[node].minimumOIndexNo = items[left].minimumOIndexNo ;
    items[node].maximumIndexNo = items[right].maximumIndexNo;
}

void update(int node, int l, int r, int index,int newValue)
{
    if (index < l or index > r)
        return;
    if (l >= index and r <= index)
    {
        items[node].maximumValue = newValue;
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (l + r) / 2;
    update(left, l, mid, index,newValue);
    update(right, mid + 1, r, index,newValue);
    items[node].maximumValue     = max(items[left].maximumValue , items[right].maximumValue);
    return ;
}

int query(int node, int l, int r,int index,int value)
{
    //cout << node << endl;
    if(r< items[node].minimumOIndexNo or l> items[node].maximumIndexNo)   return -1;
    if(l==r and items[node].maximumValue>=value)    return items[node].maximumIndexNo;
    else
    {
        int left = 2*node;
        int right = 2*node + 1 ;
        int mid = (l+r)/2;
        int p1 = -1, p2 = -1;
        if(items[left].maximumValue>=value and items[left].maximumIndexNo>=index)    
        {
            p1 = query(left,l,mid,index,value);
        }
        if(p1!=-1)  return p1;
        if(items[right].maximumValue>=value and items[right].maximumIndexNo>=index and p1==-1)
        {
            p2 = query(right,mid+1,r,index,value);
        }
        if(p2!=-1)  return p2;
        else 
        {
            return -1;
        }
        
    }
}


int main()
{
    //O_O;
    int tt = 1;
    //cin >> tt;
    int T = tt;
    while (tt--)
    {
        //write your code here
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        buildSegmentTree(1, 1, n);
        
        while (m--)
        {
            //for(int i=1;i<=3*n;i++) cout << items[i].maximumValue << ' ';
            //cout << endl;
            int choice;
            cin >> choice;
            if(choice==1)
            {
                int index, value;
                cin >> index >> value;
                index++;
                update(1, 1, n, index,value);
            }
            else 
            {
                int index,value;
                cin >> value >> index;
                
                index++;
                int x1 = query(1,1,n,index,value);
                if(x1==-1)  cout << -1 << endl;
                else 
                {
                    cout << x1-1 << endl;
                }
            }
            
        }
    }
    return 0;
}