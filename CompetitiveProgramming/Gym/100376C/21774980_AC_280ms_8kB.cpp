#include<bits/stdc++.h>
using namespace std;

long long mod_mul(long long a, long long b, long long mod)
{
    long long x = 0, y = a % mod;
    while (b > 0)
    {
        if (b & 1)
            x = (x + y) % mod;
        y = (y * 2) % mod;
        b /= 2;
    }
    return x % mod;
}

long long bigmod(long long a,long long b,long long M)
{

    long long remainder, answer = 1;

    remainder = a%M;

    while(b!=0)
    {
        if(b%2==1)
        {
            answer = mod_mul(answer,remainder,M);
        }

        remainder = mod_mul(remainder,remainder,M);

        b/=2;
    }
    return answer;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while(t--)
    {
        long long n,k,mod;
        cin >> n >> k >> mod;
        cout << bigmod(k,n,mod) << '\n';
    }
    return 0;
}
