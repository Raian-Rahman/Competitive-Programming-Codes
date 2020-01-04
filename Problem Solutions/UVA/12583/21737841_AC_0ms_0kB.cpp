#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int T=t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        deque<char>dq;
        map<char,int>mp;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]]>0)  cnt++;
            char ch;
            dq.push_back(s[i]);
            mp[s[i]]++;
            //for(int j=0;j<dq.size();j++) cout << dq[j] << ' ';
            //cout << endl;

            if(dq.size()>=k+1) mp[dq.front()]--,dq.pop_front();

        }
        cout <<"Case " << T-t << ": " << cnt << endl;
    }
    return 0;
}
