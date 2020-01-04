#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

using namespace std;

int main()
{
     int i=1;
     int n;
     while(scanf("%d",&n)!=0,n)
     {
          int arr[n][n];
          for(int j=0;j<n;j++)
               for(int k=0;k<n;k++)
                    cin >> arr[j][k];
          cout << "Case " << i << ":";
          i++;
          for (int j = 0; 2*j < n; j++)

        {

            int len = n - 2*j;

            int r = j, c = j;

            int s = 0;

            if ( 2*j + 1 == n ) s = arr[j][j];

            else

            {

                for (int j = 1; j < len; j++) s += arr[ r ][ c++ ];

                for (int j = 1; j < len; j++) s += arr[ r++ ][ c ];

                for (int j = 1; j < len; j++) s += arr[ r ][ c-- ];

                for (int j = 1; j < len; j++) s += arr[ r-- ][ c ];

            }
             cout << " " << s ;
          }
          cout<< endl;
     }
     return 0;
}
