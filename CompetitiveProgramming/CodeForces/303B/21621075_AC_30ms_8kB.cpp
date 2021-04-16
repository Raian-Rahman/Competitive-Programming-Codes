#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,n,x,y,a,b;
    cin >> n >> m >> x >> y >> a >> b;
    long long gcd=__gcd(a,b);
    a/=gcd;
    b/=gcd;
    long long k=min(n/a,m/b);
    long long width=k*a;
    long long height=k*b;
    long long lx=x-(width+1)/2;
    long long rx=x+(width-(width+1)/2);
    long long x1,x2;
    if(lx<0)        x1=0,x2=width;
    else if(rx>n)   x1=n-width,x2=n;
    else            x1=lx,x2=rx;
    long long ly=y-(height+1)/2;
    long long ry=y+(height-(height+1)/2);
    long long y1,y2;
    if(ly<0)        y1=0,y2=height;
    else if(ry>m)   y1=m-height,y2=m;
    else            y1=ly,y2=ry;
    cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << endl;
    return 0;
}
