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
        int arr[n+5];
        int matched=0,unmatched=0;
        std::vector<int> index;
        for(int i=1;i<=n;i++)
        {
        	cin >> arr[i];
        	if(arr[i]!=i)	
        	{
        		unmatched++;
        		index.push_back(i);
        	}
        	else 			matched++;
        }
        if(matched==n)	cout << 0 << endl;
        else 
        {
        	int f =1;
        	for(int i=1;i<index.size() and f;i++)
        	{
        		if(index[i]==index[i-1]+1)	continue;
        		else f=0;
        	}
        	if(!f)	cout << 2 << endl;
        	else 	cout << 1 << endl;
        }
    }
    return 0;
}


