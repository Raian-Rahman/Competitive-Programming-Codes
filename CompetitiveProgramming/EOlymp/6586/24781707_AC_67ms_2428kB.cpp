#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long n,g;
    cin >> n >> g;
    long long  arr[n+2];
    deque<long long >v;
    long long  v1=0;
    long long  cnt =0;
    for(long long  i=0;i<n;i++)
    {
        long long  s,r;
        cin >> s >> r;
        if(s>r) cnt+=3;
        else if(s==r)   v1++;
        else            v.push_back(r-s+1);
    }
    sort(v.begin(),v.end());
    cnt += (3L*min(v1,g));
    if(g<v1)
    {
        cnt+= (v1-g);
    }
    g-= min(v1,g);
  //  cout << g<< endl;
    //for(int i=0;i<v.size();i++) cout<< v[i] << ' ';
    long long  pos =0;
    while(g>0)
    {
        if(pos == v.size()) break;
        if(v[pos]>g)
        {
            if(v[pos]-1==g)
            {
                cnt++;
            }
            g=0;
        }
        else
        {
            cnt+=3;
            g-=v[pos];
            pos++;
        }
    }
    cout << cnt << endl;
    return 0;
}
