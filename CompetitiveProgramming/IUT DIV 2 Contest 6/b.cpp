#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,k,x=0,ans=0;
		scanf("%lld%lld",&n,&k);
		for(int i=0;i<n;i++)
		{
			long long a;
			scanf("%lld",&a);
			x+=a;
			if(x%k) x++;
		}
		if(x%k) ans=x/k+1;
		else ans=x/k;
		printf("%lld\n",ans);
	}
	return 0;
}
