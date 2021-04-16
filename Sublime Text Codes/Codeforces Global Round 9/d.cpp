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
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        int n;
        cin >> n;
        set<int>st;
        std::set<pair<int,int>>arr;
        for(int i=0;i<2000;i++)    st.insert(i);
        int cnt = 0;
        map<int,std::vector<int>> mp;
        for(int i=1;i<=n;i++)
        {
            int tt;
            cin >> tt;
            arr.insert({tt,i});
            mp[tt].push_back(i);
            st.erase(tt);
        }
        std::vector<int> v;
        for(int i=1;i<=n;i++)
        {
            if(*st.begin() == i)
            {
                cnt++;
                v.push_back(i);
            }
            else
            {
                while(1)
                {
                    int p = (*arr.begin()).first;
                    int q = (*arr.begin()).second;
                    if(p!=i)    break;
                    arr.erase({p,q});
                    int x = *st.begin();
                    cnt++;
                    v.push_back(q);
                    arr.insert({*st.begin(),q});
                }
                cnt++;
                v.push_back(i);
            }
        }
        cout << v.size() << endl;
        for(int i=0;i<v.size();i++) cout << v[i] << ' ';
        cout << endl;
    }
    return 0;
}


