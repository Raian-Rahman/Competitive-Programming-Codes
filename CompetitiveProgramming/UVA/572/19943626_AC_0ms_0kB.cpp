#include<bits/stdc++.h>
using namespace std;

char arr[1005][1005];
int cnt=0;
int r,c;

void floodfill(int i,int j)
{

    if(i==r or i<0)
        return;
    if(j==c or j<0)
        return;
    if(arr[i][j]=='*')
        return;
    arr[i][j]='*';
    floodfill(i+1,j);
    floodfill(i-1,j);
    floodfill(i,j+1);
    floodfill(i,j-1);
    floodfill(i+1,j+1);
    floodfill(i-1,j-1);
    floodfill(i+1,j-1);
    floodfill(i-1,j+1);


}

int main()
{
    while(cin >> r >> c)
    {
        cnt=0;
        if(r==0)
            break;
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                cin >> arr[i][j];
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(arr[i][j]!='*')
                    cnt++;
                floodfill(i,j);
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
