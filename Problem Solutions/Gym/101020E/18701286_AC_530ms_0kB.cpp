#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int n;
	cin >> t >> n;
	int xc,yc,xt,yt;
	while(t--)
	{
		cin >> xc >> yc >> xt >> yt;
		int yy=abs(yt-yc);
		int xx=abs(xc-xt);
		if(xx==yy)	cout << max(xx,yy) << '\n';
		else if ((xx%2)==(yy%2))	cout << max(xx,yy) << '\n';
		else cout << "can't reach!\n";
	}
	return 0;
}
