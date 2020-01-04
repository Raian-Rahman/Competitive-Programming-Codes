#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    int len;
    cin >> len;
    cin >> a >> b;
    int cnt=0;
    int f=1;
    for(int i=0;i<len;i++)
    {
        if(a[i]==b[i])  f=1;
        else if(a[i]!=b[i])
        {
            if(f==1)    cnt++;
            f=0;
        }
    }
    cout << cnt << '\n';
    return 0;
}
