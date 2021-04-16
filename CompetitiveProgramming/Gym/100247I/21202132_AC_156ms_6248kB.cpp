#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long long t[n+5],d[n+5];
    for(long long i=0;i<n;i++)    cin >> t[i] >> d[i];
    long long cur=0;
    long long res=0;
    priority_queue<long long>pq;
    for(long long i=0;i<n;i++)
    {
        if(i==0)    cur+=t[i];
        else        cur+=t[i]-t[i-1];
        cur-=d[i];
        pq.push(d[i]);
        while(cur<0)
        {
            res++;
            cur+=pq.top();
            pq.pop();
        }

    }
    cout << res << '\n';
    return 0;
}
