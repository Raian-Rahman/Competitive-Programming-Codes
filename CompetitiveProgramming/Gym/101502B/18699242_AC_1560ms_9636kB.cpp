#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	long long t;
	cin >>  t;
	while(t--)
	{
		long long n;
		cin >> n;
		map<long long,long long>r;
		vector< long long > vct;
		for(long long i=0;i<n;i++)
		{
			long long x,y;
			cin >> x >> y;
			vct.push_back(y);
			r[x]++;
		}
		long long cnt=0;
		for(long long i=0;i<n;i++)
		{
			long long a1=vct[i];
			long long xx=r[a1];
			cnt+=xx;
		}
		cout << cnt << '\n';
	}
	return 0;
}
