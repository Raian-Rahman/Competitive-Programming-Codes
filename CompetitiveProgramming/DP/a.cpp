//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;

int par[1000007];


int dsuFind(int n)
{
    if(par[n]==n)   return n;
    else            return dsuFind(par[n]);
}

void dsunion(int a,int b)
{
    int u = dsuFind(a);
    int v = dsuFind(b);
    if(u!=v)    par[v]=u;

}

int main()
{
    O_O;
    long long t=1;
   // cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        int n,m;
        cin >> n >> m;
        for(int i=1;i<=n;i++)   par[i]=i;
        map<int,int>degree;
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin >> a>> b;
            degree[a]++;
            degree[b]++;
            dsunion(min(a,b),max(a,b));
        }
        int arr[n+34];
        for(int i=1;i<=n;i++)   cin >> arr[i];
        int numSet=0;
        map<int,vector<int>>deg;
        for(int i=1;i<=n;i++)
        {
            deg[degree[i]].push_back(i);
        }
        map<int,int>mpSet;
        for(int i=1;i<=n;i++)
        {
            if(par[i]==i)
            {
                numSet++;
                mpSet[i]=numSet;
            }
        }

        set<int>st[numSet+3];
        vector<int>result;
        int f=1;
        for(auto it:deg)
        {
            if(!f)  break;
            vector<int>nodes = it.second;
            for(int i=0;i<nodes.size() and f;i++)
            {
                int par = dsuFind(nodes[i]);
                int index = mpSet[par];
                int choice = arr[nodes[i]];
               // cout << nodes[i] << ' ';
                if(st[index].find(choice)==st[index].end() or it.first==1)
                {
                    result.push_back(nodes[i]);
                    st[index].insert(choice);
                }
                else f=0;
            }
        }
        if(!f)  cout << -1 << endl;
        else    for(int i=0;i<n;i++)    cout << result[i] << ' ';
        cout << endl;
    }
    return 0;
}


