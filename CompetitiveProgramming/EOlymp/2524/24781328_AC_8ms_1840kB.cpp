#include<bits/stdc++.h>
using namespace std;




int n, k, fib[44];


char fun(int n, int k)
{
    if (n == 0) return 'a';
    if (n == 1) return 'b';
    if (k <= fib[n - 2])    return fun(n - 2, k);
    return fun(n - 1, k - fib[n - 2]);
}

int main()
{
    int t =1 ;
    fib[0]=1;
    fib[1]=1;
    for (int i = 2; i < 44; i++)        fib[i] = fib[i - 1] + fib[i - 2];

    cin>>t;

    while (t--)
    {
        cin>>n>>k;
        cout<<fun(n,k)<<endl;
    }
    return 0;
}
