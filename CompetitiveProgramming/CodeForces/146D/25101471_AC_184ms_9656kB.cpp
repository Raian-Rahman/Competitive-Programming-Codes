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
    O_o;
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {
        long long x1,x2,x3,x4;
        cin >> x1 >> x2 >> x3 >> x4;
        string s;
        if(abs(x3-x4)>1)
        {
            cout << -1<< endl;
            return 0;
        }
        if(x3==x4)
        {
            if(x1>=x3+1)
            {
                for(int i=0;i<x3;i++)
                {
                    s.push_back('4');
                    s.push_back('7');
                    x1--;
                    x2--;
                }
                s.push_back('4');
                x1--;
            }
            else
            {
                for(int i=0;i<x4;i++)
                {
                    s.push_back('7');
                    s.push_back('4');
                    x1--;
                    x2--;
                }
                s.push_back('7');
                x2--;
            }
        }
        else if(x3>x4)
        {
            for(int i=0;i<x3;i++)
            {
                s.push_back('4');
                s.push_back('7');
                x1--;
                x2--;
            }
        }
        else if(x4>x3)
        {
            for(int i=0;i<x4;i++)
            {
                s.push_back('7');
                s.push_back('4');
                x1--;
                x2--;
            }
        }
        string temp = "";
        int f1=0;
        if(x1<0 or x2<0)
        {
            cout << -1 ;
            return 0;
        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                temp.push_back(s[i]);
                if(s[i]=='4')
                {
                    for(int j=0;j<x1;j++)   temp.push_back('4');
                    x1=0;
                }
            }
            if(temp[temp.size()-1]=='4')
            {
                f1=1;
                temp.pop_back();
            }
            for(int i=0;i<x2;i++)   temp.push_back('7');

            if(f1)  temp.push_back('4');
        }
        for(int i=0;i<temp.size();i++) cout << temp[i];
        cout << endl;
    }
    return 0;
}
