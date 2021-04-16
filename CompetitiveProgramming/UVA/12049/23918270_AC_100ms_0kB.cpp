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

int main()
{
    FAST;
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        int n1,n2;
        cin >> n1 >> n2;
        map<int,int>m1,m2;
        map<int,int>::iterator it;

        for(int i=0;i<n1;i++)
        {
            int x;
            cin >> x;
            m1[x]++;
        }
        for(int i=0;i<n2;i++)
        {
            int x;
            cin >> x;
            m2[x]++;
        }
        int cnt=0;
        for(it=m1.begin();it!=m1.end();it++)
        {
            int p=it->first;
            if(m1[p]==m2[p])    continue;
            else
            {
                cnt+=abs(m1[p]-m2[p]);
                int l=min(m1[p],m2[p]);
                m1[p]=l;
                m2[p]=l;
            }
        }
        for(it=m2.begin();it!=m2.end();it++)
        {
            int p=it->first;
            if(m1[p]==m2[p])    continue;
            else
            {
                cnt+=abs(m1[p]-m2[p]);
                int l=min(m1[p],m2[p]);
                m1[p]=l;
                m2[p]=l;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

