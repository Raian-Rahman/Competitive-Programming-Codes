#include <iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n=1;
	while (n!=-1)
	{
		scanf("%d",&n);
		if(n!=-1)
		{
			int arr[n];
			int s=0;
			int i;
			for(i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
				s=s+arr[i];
			}
			if(s%n!=0)
				printf("-1\n");
			else
			{
				s=s/n;
				int m=0;

                for(int i=0;i<n;i++)

                {

                    if(arr[i]<s)

                        m=m+s-arr[i];



                }
                printf("%d\n",m);
			}
		}
	}

	return 0;
}
