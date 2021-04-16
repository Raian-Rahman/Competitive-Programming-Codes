#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--)
	{
		long long n,a;
		cin >> n >> a;
		long long sum= 2*n*(a-1), lw=0,hi=n-1,mid;
		while(lw<hi)
		{
		    //cout << "in loop";
			mid=(lw+hi+1)/2;
			if((mid*(mid+1))<=sum)
				lw=mid;
			else
				hi=mid-1;
            //cout << hi << " " << lw << "\n";
		}
		cout << lw+1  << "\n";
	}
	return 0;
}
