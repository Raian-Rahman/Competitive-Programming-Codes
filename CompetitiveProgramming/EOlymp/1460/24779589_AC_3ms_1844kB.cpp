#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t=1;
   // cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=i+1;
        }
        int sz = n;
        int a,b,c,d;
        cin >> a>> b >> c >> d;
        a--;
        c--;
        if(a>=n)
        {

        }
        else
        {
            reverse(v.begin()+a,v.begin()+b);
        }
        if(c<n)
        {
            reverse(v.begin()+c,v.begin()+d);
        }
        for(auto it:v)  cout << it << ' ';
        cout << endl;
    }
    return 0;
}
