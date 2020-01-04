#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c,d;
	cin >> a >> b  >> c >> d;
	int calcmin=((a-1)*c)+b;
	int calcmax=((a-1)*b)+c;
	if(calcmax>d or calcmin<d)	cout << "NO\n";
	else cout << "YES\n";
	return 0;
}
