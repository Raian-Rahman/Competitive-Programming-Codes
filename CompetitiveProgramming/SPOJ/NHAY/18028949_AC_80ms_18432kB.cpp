#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    long long int a,b,n=10,m,i,j,ck=0,ln,ln2;
    //cin.ignore();
    while(cin >> n)
    {
    	//cin.ignore();
    	bool flag=0;
    	string txt,pat;

		cin>>pat;
		ln = pat.length();
		//cout << "nise";
		cin>>txt;
		ln2 = txt.length();
		//cout << ln << " " << ln2;
		if(n>ln2)
		{
			flag=1;
			cout << "\n";
		}
		else
		for(j=0; j<ln2; j++)
		{
		//	cout << "ai";

			if(txt.compare(j,n,pat)==0)
			{
				//cout << "keno ";
				flag=1;
					//ck++;
				cout << j << "\n";
			}
		}
		if(flag==0)	cout << "\n";
        //cout << "Case " << i << ": " << ck << "\n";
			//ck=0;

    }

	return 0;
}

