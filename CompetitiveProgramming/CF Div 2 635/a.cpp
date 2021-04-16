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


char arr[100+5][100+5];
int vis[105][105];

void floodfill(int i,int j,int n,int m)
{
    if(i<0 or i>=n or j<0 or j>=m)  return ;
    if(arr[i][j]=='#')  return ;
    else
    {
      //  cout << i << ' ' << j << ' ' << arr[i][j] << endl;
        if(arr[i][j]=='G')   arr[i][j]=arr[i][j];
        else arr[i][j]='#';
        if(vis[i-1][j]==0)
        {
            vis[i][j]=1;
            floodfill(i-1,j,n,m);
        }
        if(vis[i+1][j]==0)
        {
            vis[i][j]=1;
            floodfill(i+1,j,n,m);
        }
        if(vis[i][j-1]==0)
        {
            vis[i][j]=1;
            floodfill(i,j+1,n,m);
        }
        if(vis[i][j-1]==0)
        {

            vis[i][j]=1;
            floodfill(i,j-1,n,m);
        }
    }
}
int floodfill2(int i,int j,int n,int m)
{
    if(i<0 or i>=n or j<0 or j>=m)  return 0;
    if(arr[i][j]=='#')  return 0;
    vis[i][j]=1;
    if(i==n-1 and j==m-1)   return 1;
    else
    {
        int a=0,b=0,c=0,d=0;
        if(vis[i-1][j]==0 and !(i-1<0 or i>=n or j<0 or j>=m))   a=floodfill2(i-1,j,n,m);
        if(vis[i+1][j]==0 and !(i<0 or i+1>=n or j<0 or j>=m)) b=floodfill2(i+1,j,n,m);
        if(vis[i][j+1]==0 and !(i<0 or i>=n or j<0 or j+1>=m)) c=floodfill2(i,j+1,n,m);
        if(vis[i][j-1]==0 and !(i<0 or i>=n or j-1<0 or j>=m)) d=floodfill2(i,j-1,n,m);
        return max({a,b,c,d});
    }
}



int main()
{
    O_O;
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        memset(vis,0,sizeof(vis));
        //write your code here
        for(int i=0;i<100;i++)   for(int j=0;j<100;j++)   arr[i][j]='#';
        int n,m;
        cin >> n >> m;
        int f=0;
        vector<pair<int,int>>v,g;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]=='B')
                {
                    if(n-i<=2 and m-j<=2)   f=2;
                    v.push_back({i,j});
                }
                else if(arr[i][j]=='G') g.push_back({i,j});
            }
        }
        for(int i=0;i<v.size();i++)
        {
            int x = v[i].first;
            int y = v[i].second;
            floodfill(x,y,n,m);
          //  cout << "done\n";
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)    cout << arr[i][j];
            cout << endl;
        }
        int f1=0;
        if(f!=2)    arr[n-1][m-1]='.';
        for(int i=0;i<g.size();i++)
        {
            memset(vis,0,sizeof(vis));
            int p = floodfill2(g[i].first,g[i].second,n,m);
            if(!p)
            {
                f1=1;
                break;

            }
        }
        if(f1)   cout << "No\n";
        else    cout << "Yes\n";
    }
    return 0;
}


