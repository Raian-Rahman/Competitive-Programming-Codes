#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	int x;
	int cnt=0;
	int mx=-1;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		if(x==m)	mx=1;
		if(x>m)	cnt++;
	}
	if(mx==-1 and k==0)	cout << "NO\n";
	else if(cnt<=k)	cout << "YES\n";
	else 		cout << "NO\n";
	return 0;
}
