//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;


#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define MOD 1000000007

inline void normal(long long &a) { a %= MOD; (a < 0) && (a += MOD); }
inline long long modMul(long long a, long long b) { normal(a), normal(b); return (a*b)%MOD; }
inline long long modAdd(long long a, long long b) { normal(a), normal(b); return (a+b)%MOD; }
inline long long modSub(long long a, long long b) { normal(a), normal(b); a -= b; normal(a); return a; }
inline long long modPow(long long b, long long p) { long long r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline long long modInverse(long long a) { return modPow(a, MOD-2); }
inline long long modDiv(long long a, long long b) { return modMul(a, modInverse(b)); }


int main()
{
    O_O;
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long t=1;
    cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
    	int n;
    	cin >> n;
        string s1,s2,S1,S2;
        cin >> s1 >> s2;
        string temp;
        //cout << s1 << ' ' << s2 << endl;
        std::vector<int> v;
        //cout << "done\n";
        for(int i=n-1;i>=0;i--)
        {
        	temp = "";
        	if(s2[i]!=s1[i])
        	{
        		//cout << "dhuke " << i << endl;
        		if(s1[i]==s1[0])
        		{
        			v.push_back(i+1);	
        		}
        		else 
        		{
        			v.push_back(1);
        			v.push_back(i+1);
        			if(s1[0]=='0')	s1[0]='1';
        			else			s1[0]='0';
        		}
        		//cout << i << ' ' << s1 << endl;
        		for(int j=i;j>=0;j--)
        		{
        			if(s1[j]=='0')	s1[j]='1';
        			else			s1[j]='0';
        			temp.push_back(s1[j]);	
        		}
        		//cout << temp << endl;
        		for(int j=0;j<=i;j++)	s1[j] = temp[j];
        	}
        }
        //cout << s1 << ' ' << s2 << endl;
        cout << v.size() << ' ';
        for(int i=0;i<v.size();i++)	cout << v[i] << ' ';
        cout << endl;
        

    }
    return 0;
}


