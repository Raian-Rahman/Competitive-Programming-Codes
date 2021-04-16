#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,r;
		cin >> n >> r;
		int sum=0,x;
		for(int i=0;i<n;i++)
		{
			cin >> x;
			sum+=x;
		}
		if(sum+1500==r)	cout << "Correct\n";
		else 			cout << "Bug\n";
	}
	return 0;
}
