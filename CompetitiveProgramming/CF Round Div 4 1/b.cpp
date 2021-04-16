#define ll long long
#define pi acos(-1.0)
#define Go "\n"
#define bye return 0
#define Afor(i,b) for(int i=0;i<b;i++)
#include<bits/stdc++.h>
using namespace std;

ll powll(ll a,ll b)
{
    ll p = 1;
    for(int i=0;i<b;i++)    p*=a;
    return p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {

        string n;
        cin>>n;
        ll i,c=0,j;
        ll a[10001];
        ll len=n.size();
        for(i=0,j=0;i<len;i++)
        {
            ll p=n[i]-'0';
            //cout<<p<<Go;
            if(p>0)
            {
                //cout<<p<<" "<<i<<Go;
                a[j]=p*powll(10,(len-(i+1)));
                 //cout<<a[j]<<Go;
                c++;
                j++;

            }
        }
        cout<<c<<"\n";
        for(j=0;j<c;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<"\n";

    }
}
