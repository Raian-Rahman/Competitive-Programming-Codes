#include<bits/stdc++.h>

using namespace std;

long long gcd(long long x, long long y);

int main()
{
    long long  n;
    cin >> n;
    for(long long  i=0;i<n;i++)
    {

        long long  t;
        long long  arv=1;
        cin >> t;
        long long  num[t];
        for(long long  j=0;j<t;j++)
        {
            cin >> num[j];
            arv*=num[j];
        }
        long long  m,n=0;
        m=arv*t;
        for(long long  j=0;j<t;j++)
        {
            n+=arv/num[j];
        }
        arv=gcd(m,n);
        m/=arv;
        n/=arv;
        cout << "Case " << i+1 << ": " << m  << "/" << n << endl;
    }
    return 0;
}


long long gcd(long long x, long long y)
{
    long long t;
    while(x%y)
    {
        t=x;
        x=y;
        y=t%y;

    }

    return y;
}
