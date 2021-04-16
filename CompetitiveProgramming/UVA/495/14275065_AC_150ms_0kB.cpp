#include<bits/stdc++.h>

using namespace std;

int fnc[5005][2005]={0};

void fibo();

int main()
{
    int x;
    fibo();
    while(cin >> x)
    {


        int i;
        for(i=0;i< 2000;i++)
        {
             if(fnc[x][i]!=0)
                break;
        }
        cout << "The Fibonacci number for " << x <<" is ";
        if(x == 0)
            cout << "0" ;
        else
            for(int j=i;j<=2000;j++)
            {
                cout<<  fnc[x][j];
            }

        cout << endl;
    }

    return 0;
}


void fibo()
{
    long int x,i,j,k;
    fnc[0][2000]=0;
    fnc[1][2000]=1;
    fnc[2][2000]=1;
    for(i=3;i<=5001;i++)
    {
        for(j=2000;j>=0;j--)
        {
            fnc[i][j]=fnc[i][j]+fnc[i-1][j]+fnc[i-2][j];

            if(fnc[i][j]>9)
            {
                fnc[i][j-1]+=(fnc[i][j]/10);
                fnc[i][j]=fnc[i][j]%10;
            }

        }
    }
}
