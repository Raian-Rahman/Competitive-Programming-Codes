//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
//--------------------Verdict: AC----------------------------
#include<bits/stdc++.h>
using namespace std;


#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;

int len,k ;

int memo[12][2][100][100];

int dp(int pos,int bigFlag,int sum,int rem,string num)
{
    if(pos==num.size())
    {
        if(sum%k==0 and rem%k==0)   return 1;
        else                        return 0;
    }
    if(memo[pos][bigFlag][sum][rem]!=-1)    return memo[pos][bigFlag][sum][rem];
    int l,r;
    l=0;
    if(bigFlag==true)   r= 9;
    else                
    {
        r = num[pos]-48;
    }
    int currentSum = 0;
    for(int i=l;i<=r;i++)
    {
        currentSum += dp(pos+1,bigFlag | i<(num[pos]-48), (sum+i)%k, ((rem*10)+i)%k,num);
    }

    return memo[pos][bigFlag][sum][rem]=currentSum;
}

string numToString(int a)
{
    string x = "";
    while(a)
    {
        x.push_back((a%10)+48);
        a/=10;
    }
    return x;
}

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
        int aa,bb;
        cin >> aa >> bb >> k;
        aa--;
        string a,b;
        a = numToString(aa);
        b = numToString(bb);
        while(a.size()<b.size())
        {
            a.push_back('0');
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        CASE(T-t);
        if(k>100)   cout << 0 << endl;
        else 
        {
            memset(memo,-1,sizeof(memo));
            int xx = dp(0,0,0,0,b) ;
            memset(memo,-1,sizeof(memo));
            int yy = dp(0,0,0,0,a);
            cout << xx-yy << endl;
        }
    }
    return 0;
}


