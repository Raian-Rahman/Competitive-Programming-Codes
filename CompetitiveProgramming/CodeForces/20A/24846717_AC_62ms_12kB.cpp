//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#define O_o ios_base::sync_with_stdio(0)
#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define o_O ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define fixedprecision(n) cout<<fixed<<setprecision(n)
#define endl '\n'
#define CASE(n) cout << "Case " << n << ": "
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl
int main()
{
    O_O;
    long long t=1;
   // cin >> t;
    long long T=t;
    while(t--)
    {
        string s;
        cin >> s;
        string res="";
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='/' and s[i]==s[i+1])  continue;
            else            res.push_back(s[i]);
        }
        if(s[s.size()-2]=='/' and s[s.size()-1]=='/')
        {

        }
        else if(s[s.size()-1]=='/')
        {

        }
        else
        {
            res.push_back(s[s.size()-1]);
        }
        if(res.size()==0)   res.push_back('/');
        cout << res << endl;
    }
    return 0;
}

