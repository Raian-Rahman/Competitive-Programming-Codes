#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    long long int a,b,n,m,i,j,ck=0,ln,ln2;
    string txt,pat;
    cin>>n;
    for(i=1; i<=n; i++)
	{
        cin>>txt;
        ln = txt.length();
        cin>>pat;
        ln2 = pat.length();

        for(j=0; j<ln; j++)
        {

			if(txt.compare(j,ln2,pat)==0)
			{
                ck++;
             }
        }
        cout << "Case " << i << ": " << ck << "\n";
        ck=0;

    }

	return 0;
}
