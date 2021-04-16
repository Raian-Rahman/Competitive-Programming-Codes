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
#define testPrint(n) cout << "test" << n << endl;


struct node{
    long long u;
    long long cost;
    node(long long _u,long long _cost)
    {
        u=_u;
        cost=_cost;
    }
     bool operator < ( const node& p ) const {      return cost > p.cost;   }
};
 
vector<long long>v[100007];
vector<long long>res;
map<pair<long long,long long>,long long>mp;
map<long long,long long>par;
 
long long dijkstra(long long source,long long dest)
{
    long long distance[100007];
    for(long long i=1;i<=100007;i++)  distance[i]=inf;
    priority_queue<node>pq;
    pq.push(node(source,0));
    distance[source]=0;
    res.push_back(source);
    par[source]=-1;
    while(pq.size())
    {
        node top = pq.top();
        pq.pop();
        long long u = top.u;
        for(long long i=0;i<v[u].size();i++)
        {
            long long x = v[u][i];
            if(distance[u]+mp[{u,x}] < distance[x])
            {
                distance[x]=distance[u]+mp[{u,x}];
                pq.push(node(x,mp[{u,x}]));
                res.push_back(x);
                par[x]=u;
            }
        }
    }
    if(distance[dest]==inf) return -1;
    else                    return distance[dest];
}

bool cmp(int a,int y)
{
    
}

int main()
{
    O_O;
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        int n,e,f;
        cin >> n >> e >> f;
        for(int i=0;i<e;i++)
        {
            int x,y,w;
            cin >> x >> y >> w;
            v[x].push_back(y);
            v[y].push_back(x);
            mp[x][y]=w;
            mp[y][x]=w;
        }
        int arr[f+3];
        for(int i=0;i<f;i++)    
        {
            cin >> arr[f];
        }
        sort(arr,arr+f,cmp);
    }
    return 0;
}


