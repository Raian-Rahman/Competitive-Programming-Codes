#include<bits/stdc++.h>
using namespace std;

char arr[50][50];
int r,c;
int p1x,p1y,p2x,p2y,p3x,p3y;
int vis1[50][50];
int vis2[50][50];
int vis3[50][50];
int dis1,dis2,dis3;

int xxx[4]= {0,1,0,-1};
int yyy[4]= {1,0,-1,0};

int bfs(int x,int y)
{
    deque<int>xx,yy;
    xx.push_back(x);
    yy.push_back(y);
    vis1[x][y]=0;
    int l,m;

    while(xx.size() or yy.size())
    {
        l=xx.front();
        m=yy.front();
        xx.pop_front();
        yy.pop_front();
        for(int i=0; i<4; i++)
        {
            int p,q;
            p=l+xxx[i];
            q=m+yyy[i];

            if(arr[p][q]=='#')
                continue;
            if(p<0 or p==r or q<0 or q==c)
                continue;
            if(vis1[p][q]!=-1)
                continue;
            vis1[p][q]=vis1[l][m]+1;
            if(arr[p][q]=='h')
            {
                return vis1[p][q];
            }
            xx.push_back(p);
            yy.push_back(q);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    for(int ii=0; ii<t; ii++)
    {
        dis1=1000000000,dis2=1000000000,dis3=1000000000;
        memset(vis1,-1,sizeof(vis1));

        cin >> r >> c;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]=='a')
                {
                    p1x=i;
                    p1y=j;
                }
                else if(arr[i][j]=='b')
                {
                    p2x=i;
                    p2y=j;
                }
                else if(arr[i][j]=='c')
                {
                    p3x=i;
                    p3y=j;
                }
                else if(arr[i][j]=='m')
                    arr[i][j]='#';

            }




        }

        dis1=bfs(p1x,p1y);
//        for(int i=0;i<r;i++)
//        {
//            for(int j=0;j<c;j++)    cout << vis1[i][j] <<  '\t';
//            cout << '\n';
//        }
        memset(vis1,-1,sizeof(vis1));

        dis2=bfs(p2x,p2y);
        memset(vis1,-1,sizeof(vis1));
        dis3=bfs(p3x,p3y);
//        cout << dis1 << ' ' << dis2 << ' ' << dis3 << '\n';
        cout << "Case "  << ii+1 << ": "<<max(dis1,max(dis2,dis3)) << '\n';
    }
    return 0;
}
