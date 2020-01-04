#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		char s1[1020],s2[6],s3[6];
		cin >> s1 >> s2;
		int f=1,f1=1;
		if(strstr(s1,s2)!=NULL)
		{
			f=0;
			cout << "good\n";
			continue;
		}
		else
		{
			s3[0]=s2[0];
			s3[1]=s2[1];
			s3[2]=s2[2];
			s3[3]='\0';
			if(strstr(s1,s3)!=NULL)
			{
				cout << "almost good\n";
				continue;
			}
			s3[0]=s2[1];
			s3[1]=s2[2];
			s3[2]=s2[3];
			s3[3]='\0';
			if(strstr(s1,s3)!=NULL)
			{
				cout << "almost good\n";
				continue;
			}
			s3[0]=s2[0];
			s3[1]=s2[2];
			s3[2]=s2[3];
			s3[3]='\0';
			if(strstr(s1,s3)!=NULL)
			{
				cout << "almost good\n";
				continue;
			}
			s3[0]=s2[0];
			s3[1]=s2[1];
			s3[2]=s2[3];
			s3[3]='\0';
			if(strstr(s1,s3)!=NULL)
			{
				cout << "almost good\n";
				continue;
			}


		}
		cout << "none\n";
	}
}
