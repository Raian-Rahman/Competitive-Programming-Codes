/*
    0   1   2   3   4
0   1   1   1   1   1
1   1   1   1   0   0
2   1   1   1   1   0
3   1   0   1   1   0
4   1   0   0   0   1
*/

vector<int>v[100];



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin >> n >> e;

    for(int i=0;i<e;i++)
    {
        int x,y;
        cin >> x >> y;


        v[0].push_back(2);
        v[2].push_back(0);
    }

    for(int i=0;i<v[node].size();i++)
        cout << v[node][i] << ' ';


    cout << endl;
    return 0;
}