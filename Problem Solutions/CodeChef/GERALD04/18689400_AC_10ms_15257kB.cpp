#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int h1,h2,m1,m2,dist;
		scanf("%d:%d",&h1,&m1);
		scanf("%d:%d",&h2,&m2);
		scanf("%d",&dist);
		int tdist=((h1*60)+m1)-((h2*60)+m2);
		double r1=tdist+dist;
		double ex=0,r2=0;
		if(2*dist<=tdist)	r2=tdist;
		else
		{
			double rest=2*dist-tdist;
			r2=tdist+((rest*1.0)/2.0);

		}
		printf("%.1lf %.1lf\n",r1,r2);

	}
	return 0;
}
