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
        long long w,h,n;
        cin >> w >> h >> n;
        set<long long>height,width;
        height.insert(0);
        height.insert(h);
        width.insert(0);
        width.insert(w);
        multiset<long long>maxH,maxW;	//keeps track of maxHeight and maxWidth
        maxH.insert(h);
        maxW.insert(w);
        while(n--)
        {
        	char ch;
        	long long len;
        	cin >> ch >> len;
        	if(ch=='H')
        	{
        		//height borabor hbe 
        		auto it = height.lower_bound(len);
        		auto nextElement = it;
        		it--;
        		auto previous = it;
        		auto currentDifferenceIterator = maxH.find(*nextElement-*previous);
        		maxH.erase(currentDifferenceIterator);
        		maxH.insert(len-*previous);
        		maxH.insert(*nextElement-len);
        		height.insert(len);
        		cout << (*maxH.rbegin()) * (*maxW.rbegin()) << endl;
        	}
        	else 
        	{
        		//width borabor hbe 
        		auto it = width.lower_bound(len);
        		auto nextElement = it;
        		it--;
        		auto previous = it;
        		auto currentDifferenceIterator = maxW.find(*nextElement-*previous);
        		maxW.erase(currentDifferenceIterator);
        		maxW.insert(len-*previous);
        		maxW.insert(*nextElement-len);
        		width.insert(len);
        		cout << (*maxH.rbegin()) * (*maxW.rbegin()) << endl;
        	}
        }
    }
    return 0;
}


