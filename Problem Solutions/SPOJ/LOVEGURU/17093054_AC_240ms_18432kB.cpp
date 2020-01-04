#include<bits/stdc++.h>
using namespace std;

// A utility function to find maximum of two integers
int max(int a, int b)
{   return (a > b)? a : b; }

int LCSubStr(char *X, char *Y, int m, int n)
{

    int LCSuff[m+1][n+1];
    int result = 0;


    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i-1] == Y[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}

/* Driver program to test above function */
int main()
{
    char X[1000000] ={0};
    char Y[1000000] ={0};
    int t,k;
    cin >> t >> k;
    for(int i=0;i<t;i++)
    {
        scanf(" %s %s",X,Y);
        int m = strlen(X);
        int n = strlen(Y);
       // printf("%d %d",m,n);
        int len=LCSubStr(X,Y,m,n);
        //printf("%d\n",len);

        if(len >= k)
            printf("Yes\n");
        else
            printf("No\n");

    }


    return 0;
}
