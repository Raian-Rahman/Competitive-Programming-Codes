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

std::vector<int> v[10088];
int n,t,p;
int nodeNumber;
    	
int bfs(int node)
{
	nodeNumber = 0;
	int vis[10088];
	memset(vis,-1,sizeof(vis));
	deque<int>dq;
	dq.push_back(node);
	vis[node] = 0;
	while(dq.size())
	{
		int fr = dq.front();
		//cout << fr << endl;
		dq.pop_front();
		for(int i=0;i<v[fr].size();i++)
		{
			if(vis[v[fr][i]]==-1)
			{
				vis[v[fr][i]] = vis[fr]+1;
				dq.push_back(v[fr][i]);
			}
		}
	}
	return vis[p];
}


int main()
{
    O_O;
#ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
#endif
    long long tt=1;
    cin >> tt;
    long long T = tt;
    while(tt--)
    {
        //write your code here
    	cin >> n >> t >> p;
    	for(int i=1;i<n;i++)
    	{
    		int x,y;
    		cin >> x >> y;
    		v[x].push_back(y);
    		v[y].push_back(x);
    	}
    	//cout << "done\n";
    	int dist = bfs(t);
    	int intermediate = dist-1;
    	int total = n-2;
    	if(intermediate%2==0)	cout << 1 << ' ' << 1 << endl;
    	else
    	{
    		int p = __gcd(intermediate,total);
    		cout << intermediate/p << ' ' << total/p << endl;
    	}

    	for(int i=0;i<10088;i++)	v[i].clear();
    }
    return 0;
}


