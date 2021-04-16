
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
{;
    long long t=1;
    long long T=t;
    while(t--)
    {
        long long x,y,n;
        cin >> x >> y >> n;
        for(int i=1;i<=n;i++)
        {
            if(i%x==0 and i%y==0)   cout << "FizzBuzz\n";
            else if(i%x==0) cout << "Fizz\n";
            else if(i%y==0) cout << "Buzz\n";
            else cout << i << endl;
        }
    }
    return 0;
}

