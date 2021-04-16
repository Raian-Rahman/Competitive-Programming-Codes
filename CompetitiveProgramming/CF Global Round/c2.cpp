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
    O_O;
    long long t=1;
    //cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        long long n;
        cin >> n;
        set<pair<long long, long long>>st;
        st.insert({0,0});
        st.insert({1,0});
        st.insert({2,0});
        st.insert({0,1});
        st.insert({2,1});
        long long last=1;
        long long i,j,k;
        for(i=2,j=0,k=0;k<n;i++,j++)
        {
            if(j%4==0)
            {
                st.insert({0,i});
                st.insert({1,i});
                st.insert({2,i});
                st.insert({3,i});
                st.insert({4,i});
                k++;
            }
            else if(j%4==1)
            {
                st.insert({2,i});
                st.insert({4,i});
                last =2;
            }
            else if(j%4==2)
            {

                st.insert({0,i});
                st.insert({1,i});
                st.insert({2,i});
                st.insert({3,i});
                st.insert({4,i});
                k++;
            }
            else if(j%4==3)
            {

                st.insert({2,i});
                st.insert({0,i});
                last = 1;
            }
        }
        i = 2+ (n+n-1);
        if(last==1)
        {
            st.insert({2,i});
            st.insert({4,i});
            st.insert({2,i+1});
            st.insert({3,i+1});
            st.insert({4,i+1});
        }
        else
        {
            st.insert({2,i});
            st.insert({0,i});
            st.insert({2,i+1});
            st.insert({1,i+1});
            st.insert({0,i+1});
        }
        cout << st.size() << endl;
        for(auto it:st)
        {
            cout << it.first << ' ' << it.second << endl;
        }
    }
    return 0;
}



