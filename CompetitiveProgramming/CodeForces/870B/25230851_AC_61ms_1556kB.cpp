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
#define CASE(n) cout << "Case " << n << ":\n"
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl
int main()
{
    O_O;
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int arr[n+3],b[n+3];
        for(int i=1;i<=n;i++)
        {
            cin >> arr[i];
            b[i]=arr[i];
        }
        sort(arr+1,arr+n+1);
        if(k==1)
        {
            cout << arr[1] << endl;
        }
        else if(k==2)
        {
            if(b[n]==arr[n])    cout <<arr[n] << endl;
            else
            {
                int mn1[n+3],mn2[n+3];
                mn1[0]=INT_MAX;
                mn2[n+1]=INT_MAX;
                for(int i=1;i<=n;i++)
                {
                    mn1[i]=min(b[i],mn1[i-1]);
                }
                for(int i=n;i>0;i--)
                {
                    mn2[i]=min(b[i],mn2[i+1]);
                }
                int res =INT_MIN;
                for(int i=1;i<n;i++)
                {
                //    cout <<mn1[i] << ' ' << mn2[i] << endl;
                    int temp = max(mn1[i],mn2[i+1]);
                    res = max(res,temp);
                }
                cout << res << endl;
            }
        }
        else
        {
            cout << arr[n] << endl;
        }
    }
    return 0;
}

