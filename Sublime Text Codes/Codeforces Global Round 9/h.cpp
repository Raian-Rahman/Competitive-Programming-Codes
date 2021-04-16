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
        int n,k;
        cin >> n >> k;
        int arr[n+5];
        int ev=0,od=0;
        for(int i=0;i<n;i++)	
        {
        	cin >> arr[i];
        	if(arr[i]%2==0)	ev++;
        	else 			od++;
        }
        sort(arr,arr+n);
        if(k>arr[n-1])	
        {
        	cout << "IMPOSSIBLE\n";
        	return 0;
        }
        else 
        {
        	int gcd = __gcd(arr[1],arr[0]);
        	for(int i=2;i<n;i++)
        	{
        		gcd = __gcd(gcd,arr[i]);
        	}
        	if(gcd!=1 and abs(arr[0]-k)%gcd==0)	cout << "POSSIBLE\n";
        	else if(gcd==1)						cout << "POSSIBLE\n";
        	else								cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}


