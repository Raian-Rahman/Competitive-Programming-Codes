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
#define testPrlong long(n) cout << "test" << n << endl;


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
        long long n,k;
        cin >> n >> k;
        long long arr[n+6];
        std::deque<long long> pos,neg;
        for(long long i=0;i<n;i++)    
        {
            cin >> arr[i];
            if(arr[i]>=0)    pos.push_back(arr[i]);
            else            neg.push_back(arr[i]);
        }
        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());
        long long j=0;
        //cout << neg.size() << endl;
        while(neg.size()>0 and k>0)
        {
            k--;
            pos.push_back(-neg.front());
            neg.pop_front();
        }
        //cout << k << ' ' << neg.size() << endl;
        sort(pos.begin(), pos.end());
        if(k>0)
        {
            if(k%2==1)  
            {
                neg.push_back(-pos.front());
                pos.pop_front();
            }
        }
        long long sum =0;
        for(long long i=0;i<pos.size();i++)
        {
            sum+= pos[i];
        }
        for(long long i=0;i<neg.size();i++)
        {
            sum+=neg[i];
        }
        cout << sum << endl;
    }
    return 0;
}


