#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	//cin.tie(NULL);
	//cout.tie(NULL);
	string s1,s2;
	while(cin >> s1 >> s2)
	{
        //cout << s1 << endl << s2;
        map<int,int>m1;
        map<int,int>m2;
        int h1=0,h2=0;
        int cnt1[26]={0},cnt2[26]={0};
        int len=s1.size();
        for(int i=0;i<len;i++)
		{
			cnt1[s1[i]-65]++;
			cnt2[s2[i]-65]++;
		}
		//for(int i=0;i<26;i++)
		//cout << cnt1[i] << " " << cnt2[i] << endl;
		for(int i=0;i<26;i++)
		{
			m1[cnt1[i]]++;
			if(cnt1[i]>h1)	h1=cnt1[i];
			m2[cnt2[i]]++;
			if(cnt2[i]>h2)	h2=cnt2[i];
		}
		bool flag=0;
		for(int i=0;i<=max(h1,h2);i++)
		{
			//cout << m1[i] << " " << m2[i] << endl;

			if(m1[i]==m2[i])	flag=0;
			else
			{
				flag=1;
				break;
			}
		}

		if(flag==0)	cout << "YES\n";
		else 		cout << "NO\n";
	}
	return 0;
}
