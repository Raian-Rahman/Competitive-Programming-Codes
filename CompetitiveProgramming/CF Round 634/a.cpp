//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;


int main()
{
    O_O;
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        long long x,y,z;
        cin >> x>> y >> z;
        set<long long> v1,v2,v3;
        set<long long> r1,r2,r3,total;
        for(long long i=0;i<x;i++)
        {
            long long m;
            cin >> m;
            v1.insert(m);
            r1.insert(-m);
            total.insert(m);
        }
        for(long long i=0;i<y;i++)
        {

            long long m;
            cin >> m;
            v2.insert(m);
            r2.insert(-m);
            total.insert(m);
        }
        for(long long i=0;i<z;i++)
        {

            long long m;
            cin >> m;
            v3.insert(m);
            r3.insert(-m);
            total.insert(m);
        }
        long long mx = LONG_MAX;
        for(auto it:total)
        {
            long long key = it;
            cout << key << ' ';
            long long x1 = v1.lower_bound(key)==v1.end() ? LONG_MAX : *v1.lower_bound(key);
            cout << x1 << ' ';
            long long x2 = r1.lower_bound(-key)==r1.end() ? x1 : -1*(*r1.lower_bound(key));
            cout << x2 << endl;
            long long y1 = v2.lower_bound(key)==v2.end() ? LONG_MAX : *v2.lower_bound(key);
            cout << y1 << ' ';
            long long y2 = r2.lower_bound(-key)==r2.end() ? y1 : -1*(*r2.lower_bound(key));
            cout << y2 << endl;
            long long z1 = v3.lower_bound(key)==v3.end() ? LONG_MAX : *v3.lower_bound(key);
            cout << z1 << ' ';
            long long z2 = r3.lower_bound(-key)==r3.end() ? z1 : -1*(*r3.lower_bound(key));
            cout << z2 << endl;
            cout <<key << ' ' << x1 << ' ' << x2 << ' ' << y1 << ' ' << y2 << ' ' << z1 << ' ' << z2 << endl ;
            long long s1 = (x1-y1)*(x1-y1) + (y1-z1)*(y1-z1) + (z1-x1)*(z1-x1);
            long long s2 = (x1-y2)*(x1-y2) + (y2-z1)*(y2-z1) + (z1-x1)*(z1-x1);
            long long s3 = (x1-y2)*(x1-y2) + (y2-z2)*(y2-z2) + (z2-x1)*(z2-x1);
            long long s4 = (x2-y1)*(x2-y1) + (y1-z1)*(y1-z1) + (z1-x2)*(z1-x2);
            long long s5 = (x2-y2)*(x2-y2) + (y2-z1)*(y2-z1) + (z1-x2)*(z1-x2);
            long long s6 = (x2-y2)*(x2-y2) + (y2-z2)*(y2-z2) + (z2-x2)*(z2-x2);
            cout << s1 << ' ' << s2 << ' ' << s3 << ' ' << s4<< ' ' << s5<< ' ' << s6 << endl;
            mx = min({s1,s2,s3,s4,s5,s6,mx});


        }
        cout << mx <<endl;

    }
    return 0;
}


