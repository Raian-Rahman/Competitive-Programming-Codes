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
struct points{
    long long x1,x2,y1,y2;
};

int main()
{
    O_o;
    long long t;
    cin >> t;
    long long T=t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<struct points>v(n);
        long long l=INT_MIN,r=INT_MAX;
        for(long long i=0;i<n;i++)
        {
            cin >> v[i].x1 >> v[i].y1 >> v[i].x2 >> v[i].y2;
            l = max(l,v[i].x1);
            r = min(r,v[i].x2);
        }
        long long tt=INT_MAX;
        long long b=INT_MIN;
        for(long long i=0;i<n;i++)
        {
            if(v[i].x1<=l and v[i].x2>=r)
            {
                tt=min(tt,v[i].y2);
                b=max(b,v[i].y1);
            }
        }
        //cout << tt << ' ' << b << ' ' << l << ' ' << r << endl;
        CASE(T-t);
        if(tt<b or l>r)
        {
            cout << 0 << endl;
        }
        else    cout << (tt-b)*(r-l) << endl;
    }
    return 0;
}

