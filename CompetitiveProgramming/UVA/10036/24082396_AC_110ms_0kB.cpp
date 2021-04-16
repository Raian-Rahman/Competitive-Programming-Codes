#include<bits/stdc++.h>
using namespace std;

int n,k;
int arr[10007];
int memo[10007][305];
int dp(int pos,int sum)
{
    if(pos==n)
    {
        if(sum%k==0)    return 1;
        else            return 0;
    }
    if(memo[pos][sum]!=-1) return memo[pos][sum];
    int s1 = sum+arr[pos];
    int r1=0,r2=0,r3=0,r4=0;
    if(s1<0)    r1 =  dp(pos+1,(s1%k)+k);
    else        r2 =  dp(pos+1,s1%k);
    s1=sum-arr[pos];
    if(s1<0)    r3 = dp(pos+1,(s1%k)+k);
    else        r4 = dp(pos+1,s1%k);
    return memo[pos][sum]=r1|r2|r3|r4;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        memset(memo,-1,sizeof(memo));
        cin >> n >> k;
        for(int i=0;i<n;i++)    cin >> arr[i];
        int f = dp(0,0);

        if(f==1)    cout << "Divisible\n";
        else        cout << "Not divisible\n";
    }
    return 0;

}
