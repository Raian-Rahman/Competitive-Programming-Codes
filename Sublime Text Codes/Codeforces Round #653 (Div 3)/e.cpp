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
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    int n,k;
    cin >> n >> k;
    int ac=0,bc=0,sum=0;
    deque<int> both,a,b;
    for(int i=0;i<n;i++)
    {
        int t,aa,bb;
        cin >> t >> aa >> bb;
        if(aa==1 and bb==1)   both.push_back(t);
        else if(aa==1)        a.push_back(t);
        else                  b.push_back(t);
    }

    sort(both.begin(), both.end());
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    std::vector<int> res;
    int sz = both.size();
    for(int i=0;i<min(sz,k);i++)   res.push_back(both[i]);
    int p = k-sz;
    for(int i=0;i<p and i<a.size() and i<b.size();i++)    
    {
        res.push_back(a[i]+b[i]);
        a.pop_front();
        b.pop_front();
    }
    //cout << res.size() << endl;
    for(int i=0;i<sz and i<res.size() and a.size() and b.size();i++)
    {
        int xx = a.front();
        int yy = b.front();

        if(res[i]>xx+yy)    
        {
            res[i]=xx+yy;
            a.pop_front();
            b.pop_front();
        }
    }
    for(int i=0;i<res.size();i++)   
    {
        sum+=res[i];
      //  cout << res[i] << endl;
    }  
    //cout << res.size() << endl;
    if(res.size()<k)   cout << -1 << endl;
    else               cout << sum << endl;
    return 0;
}


