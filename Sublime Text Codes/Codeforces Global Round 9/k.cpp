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
    //cin >> t;
    long long T = t;
    while(t--)
    {
        //write your code here
        int n;
        cin >> n;
        map<int,int>mp;
        for(int i=0;i<n;i++)	
        {
        	int x;
        	cin >> x;
        	x--;
        	mp[i]=x;
        }
        std::vector<int> a,b;
    	for(int i=0;i<n;i++)
    	{
    		a.push_back(i+1);
    		b.push_back(n-i);
    	}
    	int lastSum = 0;
    	for(int i=0;i<n;i++)
    	{
    		int pos = mp[i];
    		for(int j=pos;j>=0;j--)	b[j]+=i+10;
    		for(int j=pos;j<n;j++)	a[j]+=i+10;
    					
    	}
    	for(int i=0;i<n;i++)	cout << a[i] << ' ';
    	cout << endl;
    	for(int i=0;i<n;i++)	cout << b[i] << ' ';
    	cout << endl;
    }
    return 0;
}


