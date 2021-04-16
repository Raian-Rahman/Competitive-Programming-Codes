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


int pow(int x,int y)
{
    int rep = 1;
    for(int i=0;i<y;i++)    rep*=x;
    return rep;
}

int main()
{
    O_O;
    long long t=1;
    //cin >> t;
    long long T = t;
    long long v3[]={1,3,4,2};
    long long v2[]={1,2,4,3};
    long long v1[]={1,1,1,1};
    long long v4[]={1,4,1,4};
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        long long arr[n+3];
        map<long long,long long>mp;
        for(long long i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        long long templ =0,L = 0,R = 0;
        long long cont =0;
        for(long long i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]==1)    cont++;
            while(cont>k)
            {
                mp[arr[templ]]--;
                if(mp[arr[templ]]==0) cont--;
                templ++;
            }
            if(i-templ+1>= R-L+1)
            {
                R=i;
                L=templ;
            }
        }
        cout << L+1 << ' ' << R+1 << endl;

    }
    return 0;
}



