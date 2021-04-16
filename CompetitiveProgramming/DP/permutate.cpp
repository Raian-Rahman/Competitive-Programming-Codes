#include<bits/stdc++.h>
using namespace std;

string letters = "02357";
vector<string>v;
char memo[20][5];
void permutation(string s,int pos)
{
    if(pos>=18)
    {
        int f=0;
        for(int i=0;i<18;i++)
        {
            if(s[i]=='2' or s[i]=='3' or s[i]=='5' or s[i]=='7')    f=1;
            if(f==1 and s[i]=='0')  f=2;
        }
        if(f==1)
        {
            v.push_back(s);
            cout <<pos << ' ' << s << endl;
        }
        return ;
    }
    else for(int i=0;i<5;i++)    permutation(s+letters[i],pos+1);
    return ;
}

int main()
{
    memset(memo,'.',sizeof(memo));
    permutation("",0);
    for(int i=0;i<v.size();i++) cout << v[i] << endl;
}
