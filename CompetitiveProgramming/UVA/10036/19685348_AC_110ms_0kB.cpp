#include<bits/stdc++.h>
using namespace std;

int arr[10005];
int n,k;
int dparr[10005][105];
bool dp(int i,int sum)
{
    while(sum<0)    sum+=k;
    if(i>=n)
    {
        if(!sum) return 1;
        else    return 0;
    }
    if(dparr[i][sum]!=-1)   return dparr[i][sum];
    int add=dp(i+1,(sum+arr[i])%k);
    int sub=dp(i+1,(sum-arr[i])%k);
    return dparr[i][sum]=(int)(add||sub);

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(dparr,-1,sizeof(dparr));
        cin >> n >> k;
        for(int i=0;i<n;i++)    cin >> arr[i];
        if(dp(0,0)) cout << "Divisible\n";
        else        cout << "Not divisible\n";
    }
    return 0;
}
