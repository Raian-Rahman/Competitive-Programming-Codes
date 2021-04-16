//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
//--------------------Verdict: Not Avalable------------------
#include<bits/stdc++.h>
using namespace std;


#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;


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


int sz = 0;
int mx = -1;
int ans ;

int memo[12][12][12][2][2][2];

int dp(int pos,int koytaNisi,int lastDigit,bool boro,bool choto,string a,string b,bool f)
{
    if(pos==b.size())   
    {
        //cout << ans << ' ' << koytaNisi << endl;
        return koytaNisi==ans;
    }
    if(memo[pos][koytaNisi][lastDigit][boro][choto][f]!=-1)    return memo[pos][koytaNisi][lastDigit][boro][choto][f];
    
    int lo = 0;
    int hi = 9;
    
    if(!boro)   hi = b[pos]-48;
    
    if(!choto)  lo = a[pos]-48;
    
    int cur = 0;
    for(int i=lo;i<=hi;i++)
    {
        cur += dp(pos+1,koytaNisi,lastDigit,boro | i<(b[pos]-48),choto | i>(a[pos]-48),a,b,f or i);
        
        if(i>=lastDigit and (i or f))
            cur += dp(pos+1 , koytaNisi+1,i+1,boro | i<(b[pos]-48),choto | i>(a[pos]-48) , a , b,f or i);

    }   
    
    memo[pos][koytaNisi][lastDigit][boro][choto][f] = cur;
    return cur ;
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
        cin >> aa >> bb;
        string a = numToString(aa);
        string b = numToString(bb);
        while(a.size()<b.size())    a.push_back('0');
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        //cout << a << ' ' << b << endl;
        CASE(T-t);
        ans = 10;
        while(ans)
        {
            memset(memo,-1,sizeof(memo));
            int p = dp(0,0,0,0,0,a,b,0);
            if(p)   
            {
                cout << ans << ' ' << p << endl;
                break;
            }
            ans--;
        }
    }
    return 0;
}