#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long q;
    cin >> q;
    for(long long i=0;i<q;i++)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        long long sum=a+b+c;
        long long pros=min(a,b);
        long long els = max(a,b);
        long long ans=0;
        if(els+c>=2*pros)   ans=pros;
        else                ans=(pros+els+c)/3;
        cout << ans << '\n';
    }
    return 0;
}
