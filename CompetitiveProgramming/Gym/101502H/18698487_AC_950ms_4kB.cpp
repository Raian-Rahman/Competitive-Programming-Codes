#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b,c,d;
	long long t;
	cin >> t;
	while(t--)
	{
		cin >> a >> b >> c >> d;
		if(b*log(a)>d*log(c))	cout << '>';
		else					cout << '<';
		cout << '\n';
	}
	return 0;
}
