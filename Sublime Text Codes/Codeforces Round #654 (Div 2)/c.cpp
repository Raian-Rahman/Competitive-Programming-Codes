//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;


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
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        long long x,y,a,b;
        cin >> x >> y >> a >> b;
        if(x<y) swap(x,y);
        if(x>y) 
        {
            long long p = x-y;
            if(a<=p)
            {
                if(y>=b)    cout << "Yes\n";
                else        cout << "No\n";
            } 
            else 
            {
                x-=p;
                a-=p;
                x-=b;
                y-=b;
                a-=b;
                if(y<0) cout << "No\n";
                else if(y==0 and x>=a)  cout << "Yes\n";
                else if(y>0 and x+y>=a) cout << "Yes\n";
                else                    cout << "No\n";       
            }
        }
        else 
        {
            long long p = x-y;
            x-=p;
            a-=p;
            x-=b;
            y-=b;
            a-=b;
            if(y<0) cout << "No\n";
            else if(y==0 and x>=a)  cout << "Yes\n";
            else if(y>0 and x+y>=a) cout << "Yes\n";
            else                    cout << "No\n";
        } 
    }
    return 0;
}


