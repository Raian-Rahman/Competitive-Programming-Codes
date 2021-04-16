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
#define testPrlong long(n) cout << "test" << n << endl;


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
        long long n;
        cin >> n;
        if(n==1)    cout << "IMPOSSIBLE\n";
        else if(n%2==1)
        {
            cout << n << " = " << n/2 << " + " << (n/2)+1 << endl;
        }
        else 
        {
            n*=2;
            long long f=0;
            for(long long i=2;i*i<=n and !f;i++)
            {
                if(n%i==0)
                {
                    long long left = n/i - i + 1;
                    if(left%2!=0)  continue;
                    left/=2;
                    f=1;
                    cout <<  n/2 << " = " << left ;
                    for(long long j=1;j<i;j++)
                    { 
                       cout <<  " + " << left+j;
                    }
                    cout << endl;
                }
            }
            if(!f)  cout << "IMPOSSIBLE\n";
        }

    }
    return 0;
}


