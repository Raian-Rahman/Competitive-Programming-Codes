#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int R,C,I;
		cin >> R >> C >> I;
		char arr[150][150];
		for(int rr=1;rr<=R;rr++)
		{
			for(int cc=1;cc<=C;cc++)
			{
				arr[rr][cc]='.';
			}
		}


		for(int i=0;i<I;i++)
		{
			int r1,c1,r2,c2;
			char ch;
			cin >> r1 >> c1 >> r2 >> c2 >> ch;
			for(int rr=r1;rr<=r2;rr++)
			{
				for(int cc=c1;cc<=c2;cc++)
				{
					arr[rr][cc]=ch;
				}
			}
		}
		for(int rr=1;rr<=R;rr++)
		{
			for(int cc=1;cc<=C;cc++)
			{
				cout << arr[rr][cc];
			}
			cout << '\n';
		}

	}
	return 0;
}
