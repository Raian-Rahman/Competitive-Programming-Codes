#include<bits/stdc++.h>

using namespace std;

int kmparr[1000005];
string str;

void kmp()
{
    int i = 0, j = -1, len = str.size();
    kmparr[0] = -1;
    while(i < len)
	{
		while(j>=0 and str[i] != str[j])
			j = kmparr[j];
		i ++;
		j++;
		kmparr[i] = j;
    }
}

int main()
{

    cin>>str;
    kmp();
    int ans = kmparr[str.size()];
    bool mark = 0;
    while(ans>0)
	{
        for(int i=str.size()-1; i>ans and !mark; i--)
		{
			if(kmparr[i]>=ans)
				mark=true;
			else mark=false;
		}
        if(mark==true)
            break;
        ans = kmparr[ans];
    }
    if(mark==true)
        cout<<str.substr(0, ans);
    else
        cout<<"Just a legend";
    cout<<"\n";
}

