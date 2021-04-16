#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("tabs.in","r",stdin);
    int t;
    cin >>t ;
    while(t--)
    {
        int n,k;
    cin >> n >> k;
    if(n==1 and k==1)   cout << 0 << '\n';
    else if(k==1 and n!=1)  cout << 1 << '\n';
    else if(k==n and n!=1)  cout << 1 << '\n';
    else cout << 2 << '\n';
    }
    return 0;
}
