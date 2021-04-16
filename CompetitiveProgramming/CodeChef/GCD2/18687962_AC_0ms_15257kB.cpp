#include<bits/stdc++.h>

using namespace std;

long long gcd1(long long a,long long b)
{
	if(a==0)	return b;
	return gcd1(b%a,a);
}

long long gcd(long long a,char s[])
{
	long long mod=0;
	long long len=strlen(s);
	for(long long i=0;i<len;i++)
	{
		mod=(mod*10+s[i]-'0')%a;
	}
	long long temp=0;
	while(mod!=0)
	{
			temp=mod;
			mod=a%mod;
			a=temp;
	}
	return a;
}

int main()
{
	long long t;
	cin >> t;
	while(t--)
	{
		char s[500];
		long long a;
		cin >> a >> s;
		if(a==0)	{cout << s << '\n';continue;}
		long long ans=gcd(a,s);
		cout << ans << '\n';
	}
	return 0;
}
