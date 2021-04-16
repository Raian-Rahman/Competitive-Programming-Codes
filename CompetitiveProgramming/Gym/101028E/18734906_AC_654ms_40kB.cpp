#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >>  t;
	while(t--)
	{
		int n;
		int arr[10005];
		cin >> n;
		//cout << "Found\n";
		for(int i=0;i<n;i++)	cin >> arr[i];

		//sort(arr,arr+n);
		int res=arr[0];
		for(int i=1;i<n;i++)	res=__gcd(arr[i],res);
		int ans=0;

		for(int i=0;i<n;i++)	ans+=(arr[i]/res);
		cout << res << ' ' << ans << '\n';
	}
	return 0;
}
