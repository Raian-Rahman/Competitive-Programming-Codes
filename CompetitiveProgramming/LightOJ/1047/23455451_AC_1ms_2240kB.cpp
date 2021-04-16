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

int n;
int arr[21][4];
int memo[21][4];

int dp(int pos,int vis)
{
    if(pos>=n)  return 0;

    if(memo[pos][vis]!=-1)   return memo[pos][vis];
    int a[3];
    int x=0;
    for(int i=0;i<3;i++)
    {
        if(i!=vis)
        {
        //    cout   << sum <<  endl;
            a[x]=arr[pos][i]+dp(pos+1,i);
            x++;
        }
    }
    return memo[pos][vis]=min(a[0],a[1]);

}


int init_dp()
{
    memset(memo,-1,sizeof(memo));
    int a=dp(0,0);
    memset(memo,-1,sizeof(memo));
    int b=dp(0,1);
    memset(memo,-1,sizeof(memo));
    int c=dp(0,2);
    return min(a,min(b,c));
}


int main()
{
    //cout <<  Set(0,2);
    FAST;

    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        CASE(T-t);
        cin >> n;
        for(int i=0;i<n;i++)    for(int j=0;j<3;j++)    cin >> arr[i][j];

       // cout << arr[2][0];

        int sum =0;

        cout <<  init_dp() << endl;

    }
    return 0;
}

