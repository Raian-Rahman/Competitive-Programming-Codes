//coded by: pranonraian-------------------------------------
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
    cin >> t;
    long long T=t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<pair<long long,long long>>v(n);
        for(long long i=0;i<n;i++)
        {
            cin >>  v[i].second >> v[i].first;
        }
        sort(v.begin(),v.end());
        long long cnt =1 ;
        long long cur = v[0].first;
        for(long long i=1;i<n;i++)
        {
            if(v[i].second<cur)    continue;
            else
            {
                cnt++;
                cur = v[i].first;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

