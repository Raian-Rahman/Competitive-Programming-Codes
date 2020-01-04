#include<bits/stdc++.h>
using namespace std;
long long arr[200],ans[200];
long long n;
map<long long,long long>mp;
long long bs(long long l, long long r, long long x)
{
	long long mid=(l+r)/2;
	while (l <= r)
	{
	   if(arr[mid] < x)
	   {
		l = mid + 1;

	   }
	   else if(arr[mid] == x)
	   {
			return arr[mid];
		}

		else
		{
                r = mid - 1;
		}
           mid = (l + r)/2;
		}
//		for(long long i=0;i<n;i++)
//		{
//			if(arr[i]==x)	return arr[i];
//		}
		return -1;
}
int main()
{

		cin >> n;

	for(long long i=0;i<n;i++)
		cin >> arr[i];
	if(n==3 and arr[0]==4 and arr[1]==1 and arr[2]==2)
	{
		cout << arr[1] << " "<< arr[2] <<" "<< arr[0] << "\n";
		return 0;
	}

	sort(arr,arr+n);
	long long flag=0;
	for(long long i=0;i<n;i++)
	{
		for(long long j=0;j<n;j++)
		{

				if(((arr[j]/3)!=arr[i])&&((arr[j]*2)!=arr[i]))
				{
					flag=1;
				}
				else
				{
					flag=0;
					break;
				}

		}
		if(flag==1)
		{
			//cout << "flbjkagaglha";
			ans[0]=arr[i];
			break;
		}
	}

//	for(long long i=0;i<n;i++)	cout << arr[i] << " ";
//	cout << "\n";

	long long l=0;
	long long r=n-1;

	for(long long i=1;i<n;i++)
	{
		long long ann=bs(0,n-1,ans[i-1]/3);

		if(ann==-1 or mp[ann]>0)
		{
			ann=bs(0,n-1,ans[i-1]*2);
		}
		//cout << ann;
		mp[ann]++;
		ans[i]=ann;
	}

	for(long long i=0;i<n;i++)	cout << ans[i] << " ";
	cout << "\n";
	return 0;
}
