#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		map<int,int>mp;
		for(int i=0;i<n;i++)
		{
			string s;
			cin >> s;
			if(s[0]=='b')	mp[0]++;
			else if(s[0]=='k')	mp[1]++;
			else if(s[0]=='l')	mp[2]++;
		}
		int f=1;
		int cnt=0;
		int x=min(mp[2],mp[1]);
		cnt=min(x,mp[0]/2);
		cout << cnt << '\n';
	}
	return 0;
}
