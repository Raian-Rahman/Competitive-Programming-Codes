#include<bits/stdc++.h>
using namespace std;
vector<long long>v[500];
long long vis[500];
long long cnt=0;
long long res=0;
long long n,e;
void dfs_go(long long x,long long y,long long node)
{
  //  cout << "dhukse";
    vis[node]=1;
    cnt++;
    for(long long i=0;i<v[node].size();i++)
    {
        if((node==x or node==y) and (v[node][i]==x or v[node][i]==y)) continue;
        if(vis[v[node][i]]==-1)
        {

            dfs_go(x,y,v[node][i]);
        }
    }
}

void dfs(long long x,long long y)
{
    cnt=0;
    memset(vis,-1,sizeof(vis));
    dfs_go(x,y,1);
    if(cnt == n)    res++;

}

int main()
{

    cin >> n >> e;

    vector<pair<long long,long long> > edges;
    for(long long i=0;i<e;i++)
    {
        long long x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
        edges.push_back({x,y});
    }
    for(long long i=0;i<e;i++)
    {
        dfs(edges[i].first,edges[i].second);
    }
    cout << e-res << '\n';
    return 0;
}
