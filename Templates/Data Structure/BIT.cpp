//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

//for ordered set
//#include <ext/pb_ds/assoc_container.hpp> 
//#include <ext/pb_ds/tree_policy.hpp> 
//using namespace __gnu_pbds; 
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
 

#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << ":" << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define MOD 1000000007

inline void normal(int &a) { a %= MOD; (a < 0) && (a += MOD); }
inline int modMul(int a, int b) { normal(a), normal(b); return (a*b)%MOD; }
inline int modAdd(int a, int b) { normal(a), normal(b); return (a+b)%MOD; }
inline int modSub(int a, int b) { normal(a), normal(b); a -= b; normal(a); return a; }
inline int modPow(int b, int p) { int r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline int modInverse(int a) { return modPow(a, MOD-2); }
inline int modDiv(int a, int b) { return modMul(a, modInverse(b)); }

int BIT[100055];

void update(int index, int x, int n)
{
    while(index<=n)
    {
        BIT[index]+=x;
        index+= index & (-index);
    }
}

int query(int index)
{
    int sum = 0;
    while(index>0)
    {
        sum+=BIT[index];
        index -= index&(-index);
    }
    return sum;
}


int main()
{
    int testCase=1;
    scanf("%d",&testCase);
    int T = testCase;
    while(testCase--)
    {
        memset(BIT,0,sizeof(BIT));
        printf("Case %d:\n",T-testCase);
        int n,q;
        scanf("%d",&n);
        scanf("%d",&q);
        for(int i=1;i<=n;i++)
        {
            int x;
            scanf("%d",&x);
            update(i,x,n);
        }
        while(q--)
        {
            int choice;
            scanf("%d",&choice);
            if(choice==1)
            {
                int index;
                scanf("%d",&index);
                index++;
                int size = query(index) - query(index-1);
                printf("%d\n",size);
                update(index,-size,n);
            }
            else if(choice==2)
            {
                int value,index;
                scanf("%d",&index);
                scanf("%d",&value);
                index++;
                update(index,value,n);
            }
            else 
            {
                int i,j;
                scanf("%d",&i);
                scanf("%d",&j);
                printf("%d\n",query(j+1)-query(i));
                
            }
        }
    }
    return 0;
}
