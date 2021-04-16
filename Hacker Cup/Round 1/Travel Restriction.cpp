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

    //O_O;
    //freopen("myoutput.txt","w",stdout);
    int tt=1;
    cin >> tt;
    int T = tt;
    while(tt--)
    {
        //write your code here
        int n;
        cin >> n;
        string in,out;
        cin >> in >> out;
        vector<pair<char,char>>graph(n);
        std::cout << "Case #" << T-tt << ":\n"; 
        for(int i=0;i<n;i++)
        {
            graph[i].first = in[i];
            graph[i].second = out[i];
        }
        for(int i=0;i<n;i++)
        {
            string temp = "";
            for(int i=0;i<n;i++)    temp.push_back('N');  
            temp[i] = 'Y';
            int f = 1;
            if(graph[i].second=='N')    f=0;
            for(int j=i-1;j>=0;j--)
            {
                if(graph[j].first=='N' or !f)
                {
                    temp[j]='N';
                    f=0;
                } 
                else if(f and graph[j].first=='Y')
                {
                    temp[j] = 'Y';
                    if(graph[j].second=='N')    f=0;    
                }
            }
            f = 1;
            if(graph[i].second=='N')    f=0;
            for(int j=i+1;j<n;j++)
            {
                if(graph[j].first=='N' or !f)
                {
                    temp[j]='N';
                    f = 0;
                } 
                else if(f and graph[j].first=='Y')
                {
                    temp[j] = 'Y';
                    if(graph[j].second=='N')    f=0;    
                }
                else
                {
                    temp[j] = 'N';
                }
            }
            std::cout << temp << endl;
        }
    }
    return 0;
}