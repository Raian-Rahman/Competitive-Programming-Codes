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
    //O_o;
    long long t;
    cin >> t;
    long long T=t;
    while(t--)
    {
        long long n;
        cin >> n;
        n--;
        long long c1 = n/3;
        long long c2 = n/5;
        long long c5 = n/15;
        long long s1 = 3*(c1*(c1+1))/2;
        long long s2 = 5*(c2*(c2+1))/2;
        long long s3 = 15*(c5*(c5+1))/2;
        cout << s1+s2-s3 << endl;
    }
    return 0;
}

