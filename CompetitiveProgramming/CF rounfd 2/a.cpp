//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;


int main()
{
   // O_O;
    long long t=1;
   // cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        int n;
        cin >> n;
        int a[2*n+5],b[2*n+4];
        int i1,i2;
        for(int i=0;i<n;i++)
        {
            cin >> a[i] ;
            if(a[i]==1) i1=i;
        }
        for(int i=0;i<i1;i++)   a[n+i]=a[i];
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
            if(b[i]==1) i2=i;
        }
        for(int i=0;i<i2;i++)   b[n+i]=b[i];
       // for(int i=i1;i<i1+n;i++)    cout <<  a[i] << endl;
        map<int,int>mp,mp2;
        int cn=1;
        mp[1]=0;
        for(int i=i1+1;;i++)
        {
            cout << i << ' ' << a[i] << endl;
            if(cn>=n-1)    break;
            cn++;
            mp[a[i]] = i - i1;
          //  cout << mp[a[i]] << ' ' << a[i] << endl;
        }
      //  cout << endl;
        cn=1;
        mp2[1]=0;
        for(int i=i2+1;;i++)
        {
         //   cout << i << ' ';
            if(cn>=n)    break;
            cn++;
            mp2[b[i]] = i - i2;
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
          //  cout << mp[i] << ' ' << mp2[i] << endl;
            if(mp[i]==mp2[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}


