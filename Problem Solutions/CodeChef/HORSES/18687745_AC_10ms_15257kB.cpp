#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long arr[n+5];
		for(int i=0;i<n;i++)	cin >> arr[i];
		sort(arr,arr+n);
		long long d1=10000000005;
		int dif=arr[1]-arr[0];
		d1=dif;
		for(int i=2;i<n;i++)
		{
			dif=arr[i]-arr[i-1];
			if(dif<d1)	d1=dif;
		}
		cout << d1 << '\n';
	}
}
