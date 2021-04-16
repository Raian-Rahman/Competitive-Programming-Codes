#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL)
#define PI acos(-1.0)
#define TEST(n) cout<<"dhukse"<<n<<'\n'
#define endl '\n'
#define FILEREAD freopen("input.txt","r",stdin)
#define FIXED(n) cout << fixed << setprecision(n);
#define CASE(n) cout<<"Case " << n << ": ";

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
long long min(long long a, long long b){if(a<b)return a;else return b;}
long long max(long long a, long long b){if(a>b)return a;else return b;}

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////In the name of almighty ALLAH/////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////Coded By: pranonrahman////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
string s1,s2;
long long memo[32][32];
map<long long,long long>mp;
long long memo2[50][50][50];
long long shortest;
long long dp(long long i,long long j)
{
    if(i==s1.size())    return 0;
    else if(j==s2.size())   return 0;
    if(memo[i][j]!=-1)   return memo[i][j];
    if(s1[i]==s2[j])   return memo[i][j]= 1+dp(i+1,j+1);
    return memo[i][j]= max(dp(i+1,j),dp(i,j+1));
}

long long dp2(long long i, long long j, long long len)
{
        if(i>=s1.size())
        {
            len+=s2.size()-j;
            if(len==shortest) return 1;
            else return 0;
        }

        if(j>=s2.size())
        {
            len+=s1.size()-i;
            if(len==shortest) return 1;
            else return 0;
        }

        long long ans=0 ;
        if(memo2[i][j][len]!=-1) return memo2[i][j][len];
        if(s1[i]==s2[j])
        {
            ans=dp2(i+1,j+1,len+1);
        }
        else
        {
            ans+=dp2(i+1,j,len+1);
            ans+=dp2(i,j+1,len+1);
        }
        return memo2[i][j][len]=ans;
}

long long init_dp()
{
    memset(memo,-1,sizeof(memo));
    memset(memo2,-1,sizeof(memo2));

    long long mx=max(s1.size(),s2.size());
    shortest=s1.size()+s2.size()-dp(0,0);

    cout << shortest <<  ' ';
    cout << dp2(0,0,0) << endl;
}



int main()
{
    FAST;
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        cin >> s1 >> s2;
        CASE(T-t);
        init_dp();
    }
    return 0;
}

