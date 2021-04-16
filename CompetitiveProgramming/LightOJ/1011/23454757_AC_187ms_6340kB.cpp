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

int memo[16][1<<16];
int arr[16][16];
int n;


int dp(int pos,int vis)
{
    if(pos==n)  return 0;

    if(memo[pos][vis]!=-1)    return memo[pos][vis];
    int sum =0;
    for(int i=0;i<n;i++)
    {
        if(!check(vis,i))   sum = max(sum, arr[pos][i]+dp(pos+1,Set(vis,i)));
    }
    memo[pos][vis]=sum;
    return sum;
}


int init_dp()
{
    memset(memo,-1,sizeof(memo));
    return dp(0,0);
}



int main()
{
    FAST;
    int t=1;
    cin >> t;
    int T = t;
    while(t--)
    {
      //  int n;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)    cin >> arr[i][j];
        }
        CASE(T-t);
        cout << init_dp() << endl;
    }
    return 0;
}

