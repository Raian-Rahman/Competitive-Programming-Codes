#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,k;
    cin >> n >> k ;
    long long x[n+5];
    long long mx=INT_MIN;
    for(long long i=0;i<n;i++)    cin >> x[i];
    long long a;
    cin >> a;
    long long c[n+5];
    for(long long i=0;i<n;i++)    cin >> c[i];
    priority_queue<long long,vector<long long>,greater<long long>>pq;
    long long cur=k;
    long long f=1;
    long long res=0;
    for(long long i=0;i<n and f;i++)
    {
        pq.push(c[i]);
        //cout << i << ' ' << cur  << ' '  << x[i] << endl;
        if(cur>=x[i])  continue;
        else
        {
           // cout << "in else " << i << endl;
            long long day=(long long)ceil((double)(x[i]-cur)/(double)a);
           // cout << day << endl;
                for(long long j=0;j<day;j++)
                {
                    if(pq.size()==0)    f=0;   
                    res+=pq.top();
                    pq.pop();
                    cur+=a;
                }
        }

    }
    if(f)   cout << res << endl;
    else    cout << -1 << endl;
    return 0;
}
