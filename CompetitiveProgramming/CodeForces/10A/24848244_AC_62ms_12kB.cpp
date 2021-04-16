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
    //O_o;
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {
        long long n,p1,p2,p3,t1,t2;
        cin >> n >> p1 >> p2 >> p3 >> t1 >> t2 ;
        vector<pair<long long,long long>>v(n);
        for(long long i=0;i<n;i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        long long sum =0;
        sum+= ((v[0].second-v[0].first)*p1);
        //cout << sum << endl;
        for(long long i=1;i<n;i++)
        {
            long long diff = v[i].first - v[i-1].second;
            sum+= min(diff,t1)*p1;
            diff-= min(diff,t1);

            diff = max(0LL,diff);
            //cout << diff << endl;
            sum+= min(diff,t2)*p2;
            diff-= min(diff,t2);
            diff = max(0LL,diff);
            sum+= diff*p3;

            sum+= (v[i].second-v[i].first)*p1 ;
         //   cout << sum << endl;

        }

        cout << sum << endl;
    }
    return 0;
}

