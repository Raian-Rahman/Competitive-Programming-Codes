#include<bits/stdc++.h>
using namespace std;
int arr[100][100]; 
int row,col;

void visitFunction(int x,int y)
{
    //x -> row 
    //y -> col
    if(x<0 or x>=row)   return;
    if(y<0 or y>=col)   return;
    if(arr[x][y]=='*')  return;
    arr[x][y]='*';
    visitFunction(x-1,y); //upore
    visitFunction(x+1,y); //niche
    visitFunction(x,y+1); //right
    visitFunction(x,y-1); //left
}


****@
*@@*@
*@**@
@@@*@
@@**@

int main()
{
    int cnt=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]=='@')
            {
                cnt++;
                visitFunction(i,j);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
