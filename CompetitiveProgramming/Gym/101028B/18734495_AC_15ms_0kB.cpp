#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	while(n--)
	{
		string s1,s2;
		cin >> s1 >> s2;
		int len=s1.size();
		for(int i=0;i<len;i++)	if(s1[i]>='A' and s1[i]<='Z')	s1[i]=s1[i]+32;
		int len1=s2.size();
		for(int i=0;i<len1;i++)	if(s2[i]>='A' and s2[i]<='Z')	s2[i]=s2[i]+32;
		if(len!=len1)	cout << "No\n";
		else
		{
			int f=1;
			for(int i=0;i<len and f;i++)
			{
				if(s1[i]==s2[i])	continue;
				else if(s1[i]=='p' and s2[i]=='b')	continue;
				else if(s1[i]=='b' and s2[i]=='p')	continue;
				else if(s1[i]=='i' and s2[i]=='e')	continue;
				else if(s1[i]=='e' and s2[i]=='i')	continue;
				else 	f=0;
			}
			if(f==1)	cout << "Yes\n";
			else 		cout << "No\n";
		}
	}
	return 0;
}
