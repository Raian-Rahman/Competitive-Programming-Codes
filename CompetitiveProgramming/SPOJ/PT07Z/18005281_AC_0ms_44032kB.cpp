	#include<bits/stdc++.h>

	using namespace std;
	int mx;
	vector <int> v[1000000] ;
	int n;
	int level[1000000];
    bool vis[1000000];
    int bfs(int s)
    {
    	mx=-1;
    	int last,p;
        queue <int> q;
        q.push(s);
        level[ s ] = 0 ;  //Setting the level of the source node as 0
        vis[ s ] = true;
        while(!q.empty())
        {
            p = q.front();
            q.pop();
            for(int i = 0;i < v[ p ].size() ; i++)
            {
                if(vis[ v[ p ][ i ] ] == false)
                {
            //Setting the level of each node with an increment in the level of parent node
                    level[ v[ p ][ i ] ] = level[ p ]+1;
                    if(mx<level[v[p][i]])  mx= level[v[p][i]];
                     q.push(v[ p ][ i ]);
                     vis[ v[ p ][ i ] ] = true;
				}
            }
        }
        return p;
    }

    int main()
{
	memset(vis,0,sizeof(vis));

	cin >> n;
	int num=n;
	num--;
	while(num--)
	{
		int x,y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	int last=bfs(1);
	//cout << last;
	memset(vis,0,sizeof(vis));
	memset(level,0,sizeof(level));
	bfs(last);
	cout << mx ;
	cout << "\n";
	return 0;
}

