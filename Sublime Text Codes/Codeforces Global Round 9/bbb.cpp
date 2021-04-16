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
        int arr[n+5],winner[n+5];
        int first0 = -1,c1 = 0;
        winner[0]=0;
        arr[0] = 5;
        for(int i=1;i<=n;i++)
        {
        	cin >> arr[i];
        	if(arr[i]==1)	c1++;
        	else
        	{
        		if(first0==-1)	first0 =i; 
        	}	
        			
        }
    	//cout << c1 << ' ' << n << endl;
        if(c1==n and n%2==0)	cout << "Second\n";
        else if(c1==n and n%2==1)	cout << "First\n";
        else
        {
        	if(first0%2==1)	cout << "First\n";
        	else 			cout << "Second\n";
        }
    }
    return 0;
}


