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
#define CASE(n) cout << "Case " << n << ": "
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl
int main()
{
    O_o;
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {
        long long n,m;
        cin >> n >> m;
        long long arr[m+3];
        map<long long,long long>mp;
        for(long long i=0;i<m;i++)  cin >> arr[i];
        set<long long>st;
        for(int i=1;i<=n;i++)   st.insert(i);
        for(int i=1;i<m;i++)
        {
            if(arr[i]>arr[i-1])
            {
                if(st.find(arr[i]-arr[i-1])!=st.end() or mp[arr[i-1]]==arr[i]-arr[i-1])
                {
                    mp[arr[i-1]]=(arr[i]-arr[i-1]);
                    st.erase(arr[i]-arr[i-1]);
                }
                else
                {
                   // cout << i << endl;
                    cout << -1 << endl;
                    return 0;
                }
            }
            else if(arr[i]<=arr[i-1])
            {
                if(st.find(n+arr[i]-arr[i-1])!=st.end() or mp[arr[i-1]]==n+arr[i]-arr[i-1])
                {
                    mp[arr[i-1]]=(n+arr[i]-arr[i-1]);
                    st.erase(n+arr[i]-arr[i-1]);
                }
                else
                {
                    //cout << i << endl;
                    cout << -1 << endl;
                    return 0;
                }
            }

        }
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==0)
            {
                if(st.size()==0)
                {
                    cout << -1 << endl;
                    return 0;
                }
                long long p = *(st.begin());
                mp[i]=p;
                st.erase(p);
            }
        }
        for(int i=1;i<=n;i++)   cout << mp[i] << ' ';
    }
    return 0;
}

