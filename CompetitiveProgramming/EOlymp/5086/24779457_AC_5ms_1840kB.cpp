#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t=1;
   // cin >>t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        if(s1.size()>s2.size())
        {
            cout << '>' << endl;
        }
        else if(s1.size()<s2.size())
        {
            cout << '<' << endl;
        }
        else
        {
            if(s1<s2)   cout << '<' << endl;
            else if(s1>s2)  cout << '>' << endl;
            else        cout << '=' << endl;
        }

    }
    return 0;
}
