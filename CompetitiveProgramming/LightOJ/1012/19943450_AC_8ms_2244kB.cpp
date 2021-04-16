#include<bits/stdc++.h>

using namespace std;
int xh,xy;
char arr[25][25];
bool a[25][25];
int w, h, cnt;

int bfs(int i, int j)
{

	if(i + 1 < h and !a[i+1][j] and arr[i+1][j] == '.') {
		a[i+1][j] = 1;
		cnt++;
		bfs(i+1, j);
	}

	if(i - 1 >= 0 and !a[i-1][j] and arr[i-1][j] == '.') {
		a[i-1][j] = 1;
		cnt++;
		bfs(i-1, j);
	}

	if(j + 1 < w and !a[i][j+1] and arr[i][j+1] == '.') {
		a[i][j+1] = 1;
		cnt++;
		bfs(i, j+1);
	}

	if(j - 1 >= 0 and !a[i][j-1] and arr[i][j-1] == '.') {
		a[i][j-1] = 1;
		cnt++;
		bfs(i, j -1);
	}

}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    for(int x=0;x<t;x++)
    {
        memset(a,false,sizeof(a));
        memset(arr,-1,sizeof(arr));
        cnt=0;
        xh=-1;
        xy=-1;

        cin >>  w   >> h;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]=='@')
                {
                    xh=i;
                    xy=j;
                }
            }
        }
        //cout << xh << "  " << xy << endl;
        bfs(xh,xy);
        cout << "Case " << x+1 << ": "<<cnt+1 << "\n";

    }
}