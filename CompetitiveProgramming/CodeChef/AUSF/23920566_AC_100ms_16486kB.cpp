#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL)
#define PI acos(-1.0)
#define TEST(n) cout<<"dhukse"<<n<<'\n'
#define endl '\n'
#define FILEREAD freopen("input.txt","r",stdin)
#define FIXED(n) cout << fixed << setprecision(n);
#define CASE(n) cout<<"Case " << n << ": ";
long long Set(long long N,long long pos){ return N=N | (1<<pos);}
long long reset(long long N,long long pos){return N= N & ~(1<<pos);}
bool check(long long N,long long pos){return (bool)(N & (1<<pos));}
long long min(long long a, long long b){if(a<b)return a;else return b;}
long long max(long long a, long long b){if(a>b)return a;else return b;}

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////In the name of almighty ALLAH/////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////Coded By: pranonrahman////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

map<string,int>mp;

int arr[100006];

void init()
{
    for(int i=0;i<=100000;i++) arr[i]=i;
}

int find_par(int pos)
{
    if(arr[pos]==pos)   return pos;
    return arr[pos]=find_par(arr[pos]);
}

void join(int i,int j)
{
    int x=find_par(i);
    int y=find_par(j);
    arr[x]=y;
}

int main()
{
    FAST;
    int t=1;
    //cin >> t;
    int T = t;
    while(t--)
    {
        init();
        int n;
        cin >> n;
        int cur=1;
        while(n--)
        {

            string s1,s2;
            cin >> s1 >> s2;

            if(mp[s1]==0)
            {
                mp[s1]=cur;
                cur++;
            }
            if(mp[s2]==0)
            {
                mp[s2]=cur;
                cur++;
            }
            //cout << "done\n";
            int id1=mp[s1],id2=mp[s2];
            int q=find_par(id2);
            // cout << "done\n";
            int p=find_par(id1);
            //cout << mp[s1] << ' ' << mp[s2] << endl;
            //cout << arr[p] << ' ' << arr[q] << endl;
            if(p==q)
            {
                cout << "Found in friend list\n";
                arr[q]=p;
            }
            else
            {
                cout << "Found by random\n";
                arr[q]=p;
            }
          //  cout << arr[p] << ' ' << arr[q] << endl;

          //  for(int i=0;i<20;i++)    cout << arr[i] << ' ';
          //  cout << endl;
        }
    }
    return 0;
}

