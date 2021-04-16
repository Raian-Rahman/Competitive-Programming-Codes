#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	map<int,bool>mp;
	int cnt=0;
	while(k--)
	{
		string s;
		int num;
		cin >> s;
		if(s=="CLICK")
		{
			cin >> num;
			if(mp[num]==false)
			{
				mp[num]=true;
				cnt++;
			}
			else
			{
				mp[num]=false;
				cnt--;
			}
			cout << cnt << '\n';
		}
		else
		{
			mp.clear();
			cnt=0;
			cout << cnt << '\n';
		}
	}
	return 0;
}
