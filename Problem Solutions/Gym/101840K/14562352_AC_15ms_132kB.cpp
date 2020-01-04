#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("katryoshka.in", "rt", stdin);

    int t;

    cin >> t;
    for(int i=0;i<t;i++)
    {
        long long int e,m,b,ans,mn;
        cin >> e >> m >> b;
        mn=e;
        if(mn>m)    mn=m;
        if(mn>b)    mn=b;

        if(mn==e  || mn==b)
        {
            cout << "Case " << i+1 << ": " << mn<<endl;
        }
        else
        {
            ans = mn;
            e=e-mn;
            b=b-mn;
            if(e/2>=b)
                ans+=b;
            else
                ans+=e/2;

            cout << "Case " << i+1 << ": " << ans << "\n";
        }
        //cout << mn << endl;

    }

    return 0;
}
