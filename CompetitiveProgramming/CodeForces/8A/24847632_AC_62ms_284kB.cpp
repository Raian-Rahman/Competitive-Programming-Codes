//coded by: pranonraian-------------------------------------
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
        string s,s1,s2,t1,t2;
        cin >> s >> s1 >> s2;
        int f1=0,f2=0;
        int pos = s.find(s1);
        if(pos!=-1)
        {
            pos = s.find(s2,pos+s1.size());
            if(pos!=-1) f1=1;
        }
        reverse(s.begin(),s.end());
        pos = s.find(s1);
        if(pos!=-1)
        {
            pos = s.find(s2,pos+s1.size());
            if(pos!=-1) f2=1;
        }
       // cout << p1 << ' ' << p2 << endl;
        if(f1==0 and f2==0)
        {
            cout << "fantasy\n";
        }
        else if(f1==1 and f2==1)
        {
            cout << "both\n";
        }
        else if(f1)
        {
            cout << "forward\n";
        }
        else
        {
            cout << "backward\n";
        }
    }
    return 0;
}

