//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;

int n,k;
int t[100007],a[100007],b[100007];
int mn = INT_MAX;
int memo[100007][]
int dp(int pos,int acnt,int bcnt, int readingHour)
{
    int c1=INT_MAX,c2=INT_MAX;
    if(acnt-a[pos]>=k and bcnt-b[pos]>=k and pos<n) c1=dp(pos+1,acnt-a[pos],bcnt-b[pos],readingHour-t[pos]);
    if(pos<n) c2=dp(pos+1,acnt,bcnt,readingHour);
    return min({c1,c2,readingHour});
}


int main()
{
    O_O;
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    cin >> n >> k;
    int ac=0,bc=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> t[i] >> a[i] >> b[i];
        if(a[i])    ac++;
        if(b[i])    bc++;
        sum+=t[i];
    }
    if(mn=INT_MAX)  cout << -1 << endl;
    else            cout << mn << endl;
    return 0;
}


