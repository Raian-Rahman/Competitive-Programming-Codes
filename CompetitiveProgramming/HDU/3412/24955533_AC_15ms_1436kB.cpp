#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int T=t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int,string> >v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            string s;
            int rat;
            cin >> s >> rat;
            v.push_back(make_pair(rat,s));
            mp[rat]++;
        }
        sort(v.begin(),v.end());
        set<string>st;
        set<string>::iterator it;
        for(int i=0;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                for(int k=j-1;k>=0;k--)
                {
                    int n0 = v[i].first;
                    int n1 = v[j].first ;
                    int n2 = v[k].first;
                    int sum2 = n1+n2;
                    if(sum2==n0)    st.insert(v[i].second);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                for(int k=j-1;k>=0;k--)
                {
                    for(int l=k-1;l>=0;l--)
                    {
                        int n0 = v[i].first;
                        int n1 = v[j].first ;
                        int n2 = v[k].first;
                        int n3 = v[l].first;
                        int sum2 = n1+n2+n3;
                        if(sum2==n0)    st.insert(v[i].second);
                    }
                }
            }
        }
        cout << st.size() << endl;
        for(it=st.begin();it!=st.end();it++)    cout << *it << endl;
    }
    return 0;
}


