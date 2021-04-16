//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
//--------------------Verdict: AC----------------------------
#include<bits/stdc++.h>
using namespace std;


#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;
#define MOD 1000000007



void precalculation(string &a,string &b)
{
    digit=0;
    long long j=0;
    long long p;
    if(a.size()>b.size())   p = a.size();
    else                    p = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for(j=0;j<p;j++)
    {
        if(j<a.size())  bottom.push_back(a[j]-48);
        else            bottom.push_back(0);
        if(j<b.size())  top.push_back(b[j]-48);
        else            top.push_back(0);
        digit++;
    }
    reverse(top.begin(), top.end());
    reverse(bottom.begin(), bottom.end());
    /*for(auto it: bottom)
    {
        cout << it <<  ' ';
    }
    cout << endl;
    for(auto it: top)
    {
        cout << it <<  ' ';
    }
    cout << endl;*/
}



int main()
{
    //O_O;
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long t=1;
    //cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
    }
    return 0;
}


