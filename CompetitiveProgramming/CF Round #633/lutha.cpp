#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>


#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     int t=1;
     cin >> t;
     int T = t;
     while(t--)
     {
         int n;
         cin >> n;
         int arr[n+3];
         map<int,int>mp;
         for(int i=0;i<n;i++)
         {
             cin >> arr[i];
             mp[arr[i]]++;
         }
         int s1=0,s2=0,s3=0;
         for(auto it:mp)
         {

             if(it.second!=1)
             {
                 s2=max(s2,it.second);
                 s3++;
             }
             else s1++;
         }
         s1+= max(1,s3)-1;
         if(s2==s1) cout << s2 << endl;
         else if(s1>s2)
         {
             if(s2==0 and s1>=2)    cout << 1 << endl;
             else                   cout << s2 << endl;
         }
         else
         {
             if(s2-s1>=2)
             cout << s1+ 1 << endl;
             else cout << s1 << endl;
         }
     }
     return 0;
}

