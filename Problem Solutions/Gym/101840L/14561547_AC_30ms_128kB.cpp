#include<bits/stdc++.h>

using namespace std;


int main()
{
      freopen("lazy.in", "rt", stdin);
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++)
    {

        cin >> n;
        int ans=0;
        while(n!=1)
        {
            ans+=n/2;
            n=(n/2)+(n%2);
        }
        cout << "Case " << i+1 << ": " << ans << "\n";
    }
    return 0;
}
