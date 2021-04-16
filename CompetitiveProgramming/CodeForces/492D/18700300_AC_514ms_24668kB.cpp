#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,x,y;
	cin >> n >> x >> y;
	vector<long long>vct;
	long long cx=1,cy=1;
	while((cx-1)<x or (cy-1)<=y)
	{
		//if(cx>=x or cy>=y)	break;
		if(cx*y<cy*x)
		{
			vct.push_back(0);
			cx++;
		}
		else if(cx*y>cy*x)
		{
			vct.push_back(1);
			cy++;
		}
		else if(cx*y==cy*x)
		{
			vct.push_back(2);
			vct.push_back(2);
			cx++;
			cy++;
		}
	}
	for(long long i=0;i<n;i++)
	{
		long long inp;
		cin >> inp;
		long long res=((inp-1)%(x+y));
		long long ans=vct[res];
		if(ans==0)	cout << "Vanya\n";
		else if(ans==1)	cout << "Vova\n";
		else 		cout << "Both\n";
	}

	return 0;
}
