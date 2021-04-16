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
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {
        long long n,m;
        cin >> n >> m;
     //   cout << "done\n";
        vector<string>v;
        for(long long i=0;i<n;i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
     //       cout << "fafafa\n";
        }
     //   cout <<"Done\n";
        long long arr[70];
        long long a[20];
     //   cout <<"Done\n";
        for(long long i=0;i<m;i++)    a[i]=i;

        long long gm=INT_MAX;
    //    for(long long i=0;i<m;i++)    cout << a[i];
      //      cout << endl;

        do{

        memset(arr,0,sizeof(arr));
          //  for(long long i=0;i<m;i++)    cout << a[i];
          //  cout << endl;
            for(long long i=0;i<m;i++)
            {
                for(long long j=0;j<n;j++)
                {
                    arr[j]=arr[j]*10+ (v[j][a[i]]-48);
                }
            }
            long long mn=INT_MAX;
            long long mx=INT_MIN;
            for(long long i=0;i<n;i++)
            {
                mn=min(mn,arr[i]);
                mx=max(mx,arr[i]);
            }
            gm = min(abs(mn-mx),gm);
        }while(next_permutation(a,a+m));
        cout << gm << endl;
    }
    return 0;
}

