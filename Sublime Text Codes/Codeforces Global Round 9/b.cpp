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
        //write your code here
        int n,m;
        cin >> n >> m;
        int arr[n+4][m+5];
        int mx = -1,x,y;
        for(int i=0;i<n;i++)    
            for(int j=0;j<m;j++)    
            {
                cin >> arr[i][j];
                if(mx>arr[i][j])    
                {
                    x=i;
                    y=j;
                }
            }
        int f = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i==0 and j==0) or (i==n-1 and j==0) or (i==0 and j==m-1) or (i==n-1 and j==m-1))
                {
                    if(arr[i][j]>2) 
                    {
             //           cout << "case 1";
                        f=1;
                    }
                    else arr[i][j]=2;
                }
                else if(i==0 or j==0 or i==n-1 or j==m-1)
                {
                    if(arr[i][j]>3) 
                    {
             //           cout << "case 2";
                        f=1;
                    }
                    else arr[i][j]=3;
                }
                else
                {
                    if(arr[i][j]>4) 
                    {
            //            cout << "case 3";
                        f=1;
                    }
                    else    arr[i][j]=4;
                }
            }
        }
        if(f)
        {
            cout << "NO\n";
        }
        else 
        {
            cout << "YES\n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout << arr[i][j] << ' ';
                }
                cout << endl;
            }
        }
    }
    return 0;
}


