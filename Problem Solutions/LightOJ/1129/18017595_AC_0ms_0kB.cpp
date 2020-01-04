#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    int tt;
    cin >> tt;
    for(int ii=0;ii<tt;ii++)
    {
        bool flag=0;
        vector<string>arr;
        int n;
        cin >> n;
        int num=n;
        while(num--)
        {
            string nn;
            cin >> nn;
            arr.push_back(nn);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++)
        {
			int len=arr[i].size();
			int len2=arr[i+1].size();
			if(len>len2)    continue;
			if(arr[i+1].compare(0,len,arr[i])==0)
			{
				flag=1;
				break;
			}

        }
        if(flag==1)     cout << "Case " << ii+1 << ": NO\n";
        else cout << "Case " << ii+1 << ": YES\n";

    }
    return 0;
}
