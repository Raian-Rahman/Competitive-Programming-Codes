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
        string s,s2;
        cin >> s;
        s2=s;
        int cnt=0;
        int t1=-1,t2=-1,t3=-1;
        int f=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1] and s[i]=='V' and s[i+1]!='K' and !f)
            {
                cnt++;
                s[i]='K';
                f=1;
            }
            else if(s[i-1]=='V' and s[i]=='K')
            {
                cnt++;
            }
        }
        int c2=0;
        f=0;
        s=s2;
        for(int i=s.size()-1;i>0;i--)
        {
            if(s[i]==s[i-1] and s[i]=='K' and s[i-2]!='V' and !f)
            {
                c2++;
                s[i-1]='V';
                f=1;
            }
            else if(s[i-1]=='V' and s[i]=='K')
            {
                c2++;
            }
           // cout << c2 << endl;
        }
        //cout << cnt << ' ' << c2 <<endl;
        cout << max(cnt,c2) <<endl;
    }
    return 0;
}

