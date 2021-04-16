#include<bits/stdc++.h>

using namespace std;

int main()
{
    deque <int> dif;
    int n,x,cnt=0,k;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        dif.push_back(x);
    }
    while(dif.size()>0)
    {
        if(dif.front()<=k)
        {
            cnt++;
            dif.pop_front();
        }
        else if(dif.back()<=k)
        {
            cnt++;
            dif.pop_back();
        }
        else
            break;
       // for(int i=0;i<dif.size();i++)
       //     cout << dif[i];
       // cout << endl;
    }
    cout << cnt << endl;

        //cout << dif.front();
        //cout << dif.back();
    return 0;
}
