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
    long long t;
    long long T=t;
    while(cin >> t)
    {
        if(t==0)    break;
        long long cur=0,sum=0;
        for(long long i=0;i<t;i++)
        {
            long long n;
            cin >> n;
            long long dif = n-cur;
            if(dif>0)
            {
                sum+= 5+(dif*6);
            }
            else
            {
                sum+= 5+(-1*dif*4);
            }
            cur=n;
        }
        cout << sum << endl;
    }
    return 0;
}


