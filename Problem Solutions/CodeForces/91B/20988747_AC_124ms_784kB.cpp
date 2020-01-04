#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FASTIO ios_base::sync_with_stdio(0);cin.tie(NULL)


int main()
{
    FASTIO;
    int n;
    cin >> n;
    int a[n+3],qu[n+3];
    for(int i=1; i<=n; i++)     cin >> a[i];
    qu[n]=a[n];
    for(int i=n-1; i>0; i--)    qu[i] = min(qu[i+1],a[i]);
    for(int i=1; i<=n; i++)
    {
        int res=lower_bound(qu+i+1,qu+1+n,a[i])-qu-2-i;
        cout << res << endl;
    }
    return 0;
}
