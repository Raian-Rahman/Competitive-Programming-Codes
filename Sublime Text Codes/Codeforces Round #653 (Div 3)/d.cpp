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


int main()
{
    O_O;
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    long long t = 1;
    cin >> t;
    long long T =t;
    while (t--)
    {
        //cout << "hello world!" << endl;
        //write your code here
        long long n,k;
        cin >> n >> k;
        map<long long,long long>mp;
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin >> x;
            long long rem = x%k;
            if(rem==0)
            {
                mp[rem]++;
            }
            else mp[k-rem]++;;
        } 
        long long cur =0;
        long long mx = 0;
        for(auto it:mp)
        {
         
            long long x = it.first;
            if(x==0)    continue;
            //cout << x << ' ' << mp[x] << endl;
            long long pp = ((mp[x]-1)*k)+x;
            //cout << pp << endl;
            mx = max(mx,pp); 
            
        }
        if(mx==0)   cout << 0 << endl;
        else    cout << mx +1 << endl;
        //cout << endl;
    }
    return 0;
}


