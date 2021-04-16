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
    //cin >> t;
    long long T=t;
    while(t--)
    {
        long long n,m;
        cin >> n >> m;
        map<long long,long long>mp;
        map<long long,long long>m2;
        long long ac=0,tp=0;
        for(int i=0;i<m;i++)
        {
            string s;
            long long x;
            cin>> x >> s;
            if(s=="AC" and m2[x]==0)
            {
                ac++;
                tp+= mp[x];
                m2[x]=1;
            }
            else
            {
                mp[x]++;
            }
        }
        cout << ac << ' ' << tp << endl;
    }
    return 0;
}

