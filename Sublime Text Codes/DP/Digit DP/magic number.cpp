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
#define MOD 1000000007

long long m,d,digit;
string a,b;
vector<long long> bottom,top;

void precalculation(string &a,string &b)
{
    digit=0;
    long long j=0;
    //cout << a << ' ' << b << endl;
    long long p;
    if(a.size()>b.size())   p = a.size();
    else                    p = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for(j=0;j<p;j++)
    {
        //cout << a[j] << ' ' << b[j] << ' ' << p << endl;
        if(j<a.size())  bottom.push_back(a[j]-48);
        else            bottom.push_back(0);
        if(j<b.size())  top.push_back(b[j]-48);
        else            top.push_back(0);
        digit++;
    }
    reverse(top.begin(), top.end());
    reverse(bottom.begin(), bottom.end());
    /*for(auto it: bottom)
    {
        cout << it <<  ' ';
    }
    cout << endl;
    for(auto it: top)
    {
        cout << it <<  ' ';
    }
    cout << endl;*/
}

long long memo[2007][2][2][2500];

long long dp(long long pos,bool boro,bool choto,long long rem)
{
    if(pos==digit)  
    {
        if(rem==0)      return 1ll;
        else            return 0ll;
    }

    long long lo = 0;
    long long hi = 9;
    if(!boro)   hi = top[pos];
    if(!choto)  lo = bottom[pos];
    if(memo[pos][boro][choto][rem]!=-1) return memo[pos][boro][choto][rem];
    if(pos%2==1 and lo<=d and d<=hi)    return memo[pos][boro][choto][rem] = dp(pos+1,boro | d<top[pos],choto | d> bottom[pos], ((((rem*10)%m) + (d %m))%m))%MOD;
    else if(pos%2==0)
    {
        long long cur =0;
        for(long long i=lo;i<=hi;i++)
        {
            if(i==d)    continue;
            cur = ((cur%MOD)+(dp(pos+1,boro | i<top[pos],choto | i> bottom[pos], ((((rem*10)%m) + (i %m))%m))%MOD));
        }
        return memo[pos][boro][choto][rem] = cur%MOD;
    }
    else    return 0ll;
}


int main()
{
    //O_O;
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long t=1;
    //cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        cin >> m >> d;
        cin >> a >> b;
        //cout << a << ' ' << b << endl;
        precalculation(a,b);
        memset(memo,-1,sizeof(memo));
        cout <<  dp(0,0,0,0) << endl;;
    }
    return 0;
}


