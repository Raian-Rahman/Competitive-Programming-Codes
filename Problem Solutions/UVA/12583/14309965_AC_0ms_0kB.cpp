#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        int n,k;
        string name;
        cin >> n >> k >> name;
        //cout << name << endl;
        int tc=0;
        for(int j=1;j<n;j++)
        {
            int cnt=0;
            for(int l=j-k;l<j;l++)
            {
                if(l<0)
                    l=0;
                if(name[l]==name[j])
                {
                    cnt++;
                    break;
                }

            }
            if(cnt>0)
                tc++;
        }
        cout << "Case " << i+1 << ": " << tc << "\n";
    }
    return 0;
}
