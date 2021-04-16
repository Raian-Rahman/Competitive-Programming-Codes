#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans=-1;
    int a[n+5],b[n+5];
    int minA=-1;
    for(int i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
        if(minA >= a[i])  continue;
        ans=max(ans,b[i]);
        minA=a[i];
    }
    cout << ans << '\n';
    return 0;
}
