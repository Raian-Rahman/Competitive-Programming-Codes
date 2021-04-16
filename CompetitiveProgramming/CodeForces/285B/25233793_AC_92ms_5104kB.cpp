//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#define O_o ios_base::sync_with_stdio(0)
#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define o_O ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define fixedprecision(n) cout<<fixed<<setprecision(n)
#define endl '\n'
#define CASE(n) cout << "Case " << n << ":\n"
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl

int memo[1050][1050];

int lcs(vector<string> s1,vector<string> s2,int m,int n)
{
    if(m<0 or n<0)    return 0;
    if(memo[m][n]!=-1)  return memo[m][n];
    if(s1[m]==s2[n])    return memo[m][n]=1+ lcs(s1,s2,m-1,n-1);
    else    return memo[m][n]= 0+ max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
}

int main()
{
    O_O;
    long long n;
    cin >> n;
    long long a,b;
    cin >> a >> b;
    long long arr[n+3];
    for(long long i=0;i<n;i++)    cin >> arr[i];
    long long x = a;
    long long res  =0;
    while(x!=b)
    {
        res++;
        x = arr[x-1];
        if(x==a)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << res << endl;
    return 0;
}

