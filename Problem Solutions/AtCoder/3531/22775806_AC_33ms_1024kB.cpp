#include<bits/stdc++.h>
using namespace std;
#define INT_MAX 0x3F3F3F3F

long long node,edge,r;
long long dist[500][500];
long long cities[400];

void fw(long long n)
{
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            for(long long k=1;k<=n;k++)
            {
                dist[j][k] = min(dist[j][k],dist[j][i]+dist[i][k]);
            }
        }
    }
}

int main()
{
    cin >> node >> edge >> r;
    for(long long i=1;i<=node;i++)
        for(long long j=1;j<=node;j++)
        {
            if(i==j)    dist[i][j]=0;
            else        dist[i][j]=INT_MAX;
        }
    for(long long i=0;i<r;i++)
        cin >> cities[i] ;
    sort(cities,cities+r);



    for(long long i=0;i<edge;i++)
    {
        long long x,y,d;
        cin >> x >> y >> d;
        if(dist[x][y]>d)    dist[x][y]=d;
        if(dist[y][x]>d)    dist[y][x]=d;
    }


     fw(node);

    long long ans=INT_MAX;
    do
    {
        long long res = 0;
        for(long long i=1;i<node;i++)   res+=dist[cities[i-1]][cities[i]];
        ans = min(ans,res);
    }while(next_permutation(cities,cities+r));
    cout << ans << '\n';
    return 0;
}
