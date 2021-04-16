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

long long memo[75][50];


long long ncr(long long n,long long r)
{
    if(r==0 or r==n)    return 1;
    if(memo[n][r]!=-1)  return memo[n][r];
    return memo[n][r]=ncr(n-1,r-1)+ncr(n-1,r);
}


int main()
{
    O_O;
    long long t=1;
    cin >> t;
    long long T=t;
    while(t--)
    {
        memset(memo,-1,sizeof(memo));
        long long n;
        cin >>n;
        double x;
        cin >> x;
        double sum =0;
        for(int i=n;i<2*n;i++)
        {
            sum += ncr(2*n-1,i)*pow(x,i)*pow(1-x,2*n-1-i);
        }
        fixedprecision(2);
        cout << sum <<endl;

    }
    return 0;
}

