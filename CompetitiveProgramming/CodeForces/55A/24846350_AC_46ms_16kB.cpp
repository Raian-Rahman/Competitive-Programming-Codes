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
#define CASE(n) cout << "Case " << n << ": "
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl
int main()
{
    O_o;
    long long t=1;
   // cin >> t;
    long long T=t;
    while(t--)
    {
        long long n;
        cin >> n;
        bool flag[n+3];
        memset(flag,0,sizeof(flag));
        long long cur =0;
        flag[0]=true;
        for(long long i=1;i<=n*n;i++)
        {
            cur += i%n;
            cur = cur%n;
            flag[cur]=true;
        }

        for(long long i=0;i<n;i++)
        {
            if(flag[i]==0)
            {
                cout << "NO\n";
                return 0;
            }
        }
        cout << "YES\n";
    }
    return 0;
}

