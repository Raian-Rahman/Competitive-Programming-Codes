#include<bits/stdc++.h>
using namespace std;
 
long long memo[505][505];
long long n;
long long arr[505][505];
 
long long dp(long long i,long long j)
{
    if(j<0) return 0;
    if(i>2*n-2)    return 0;
    if(arr[i][j]==-1)   return 0;
    if(memo[i][j]!=-1)  return memo[i][j];
    long long a1=0,a2=0;
    if(i<n-1)
    {
        a1 = arr[i][j]+dp(i+1,j);
        a2 = arr[i][j]+dp(i+1,j+1);
    }
    else
    {
        a1 = arr[i][j]+dp(i+1,j-1);
        a2 = arr[i][j]+dp(i+1,j);
    }
  //  cout << i << ' ' << j << ' ' << a1 << ' ' << a2 << endl;
    memo[i][j]=max(a1,a2);
    return memo[i][j];
}
 
long long init_dp(long long i,long long j)
{
    memset(memo,-1,sizeof(memo));
    return dp(0,0);
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long t;
    cin >> t;
    for(long long xx=0;xx<t;xx++)
    {
      //  long long n;
        cin >> n;
 
        memset(arr,-1,sizeof(arr));
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<=i;j++)   cin >> arr[i][j];
        }
       // cout << "hoise\n";
        for(long long i=n,k=n-1;i<2*n-1;i++,k--)
        {
       //     cout << "afahlfan " << i << ' ' << k  << '\n';
            for(long long j=0;j<k;j++)   cin >> arr[i][j];
        }
 
//        for(long long i=0;i<2*n-1;i++)
//        {
//            for(long long j=0;j<=2*n-1;j++)   cout << arr[i][j]  << ' ';
//            cout << endl;
//        }
//       // cout << "done\n";
        cout << "Case " << xx+1 << ": " << init_dp(0,0) << '\n';
    }
    return 0;
}