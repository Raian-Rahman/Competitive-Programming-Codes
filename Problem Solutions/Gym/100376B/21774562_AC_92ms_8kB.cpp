#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,m,x1,y1,x2,y2;
        cin>>n>>m>>x1>>y1>>x2>>y2;
        long long h,v,area,ans=0;
        h = n-abs(x2-x1);
        v = m- abs(y2-y1);
        area = h*v*2;
        if(((2*h)>n) and ((2*v)>m))    area -= (2*h-n)*(2*v-m);
        ans = (n*m)-area;
        cout<<ans<< '\n';
    }
    return 0;
}
