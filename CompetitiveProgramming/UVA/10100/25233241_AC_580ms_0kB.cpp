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
#define CASE(n) cout << "Case " << n << ":\n"
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl

int memo[1050][1050];

int lcs(vector<string> s1,vector<string> s2,int m,int n)
{
    if(m<0 or n<0)    return 0;
    if(memo[m][n]!=-1)  return memo[m][n];
    if(s1[m]==s2[n])    return memo[m][n]=1+ lcs(s1,s2,m-1,n-1);
    else    return memo[m][n]= 0+ max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
}

int main()
{
    O_O;
    string s1,s2;
    int xxxx = 1;
    while(getline(cin,s1))
    {
        memset(memo,-1,sizeof(memo));
        getline(cin,s2);
        cout << right << setw(2) << xxxx++ << ". ";
        if(s2.size()==0 or s1.size()==0)
        {
            cout << "Blank!\n";
            continue;
        }
        map<string,vector<int>>mp;
        string s = "";
        vector<string>v1,v2;
        for(int i=0;i<s1.size();i++)
        {
            if(!isalpha(s1[i]) and !isdigit(s1[i])) s1[i]=' ';

        }
        for(int i=0;i<s2.size();i++)
        {
            if(!isalpha(s2[i]) and !isdigit(s2[i])) s2[i]=' ';

        }
        string word;
        istringstream ss(s1);
        while(ss>>word) v1.push_back(word);
        istringstream ss1(s2);
        while(ss1>>word) v2.push_back(word);
        int res = 0;
        res = lcs(v1,v2,v1.size()-1,v2.size()-1);
        cout <<  "Length of longest match: " << res << endl;
    }
    return 0;
}

