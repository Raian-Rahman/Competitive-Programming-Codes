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
        map<string,int>mp;
        mp["C"]=0;
        mp["C#"]=1;
        mp["D"]=2;
        mp["D#"]=3;
        mp["E"]=4;
        mp["F"]=5;
        mp["F#"]=6;
        mp["G"]=7;
        mp["G#"]=8;
        mp["A"]=9;
        mp["B"]=10;
        mp["H"]=11;

        vector<string> v;
        for(int i=0;i<3;i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(),v.end());

        do{
            //cout << v[0] << ' ' << v[1] << ' ' << v[2] << endl;
            //cout << mp[v[0]] << ' ' << mp[v[1]]<< ' ' << mp[v[2]] << endl;

            if(((mp[v[0]]+4)%12 == mp[v[1]]) and ((mp[v[1]]+3)%12 == mp[v[2]]))
            {
                cout << "major\n";
                return 0;
            }
            else if(((mp[v[0]]+3)%12 == mp[v[1]]) and ((mp[v[1]]+4)%12 == mp[v[2]]))
            {
                cout << "minor\n";
                return 0;
            }
        }while(next_permutation(v.begin(),v.end()));
        cout << "strange\n";

    }
    return 0;
}

