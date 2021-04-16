#include<bits/stdc++.h>


using namespace std;

long long n,t,ans,m;

long long bs(long long n,long long nm)
{
    long long mid=-1,lo=1,hi=n;
    while(1)
    {
        if(mid==(lo+hi)/2) break;
        mid=(lo+hi)/2;
        if((1+mid)*mid/2+(n-mid)>nm) hi=mid;
        else lo=mid;
    }
    return lo;
}



int main()
{

    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if(m==1)	cout << 1 << '\n';
        else if(((1+n)*n/2)<=(n*m))	cout << n << '\n';
		else
		{
			long long x;
			x=bs(n,n*m);
			cout << x << '\n';
		}

    }
    return 0;
}
