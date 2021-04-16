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
#define testPrint(n) cout << "test" << n << endl;


int main()
{
    O_O;
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    long long t = 1;
    cin >> t;
    long long T =t;
    while (t--)
    {
       // cout << t << endl;
        //cout << "hello world!" << endl;
        //write your code here
        long long n;
        cin >> n; 
        string s;
        cin >> s;
        stack<char>st;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(')');
            }
            else 
            {
                if(st.empty())  cnt++;
                else        st.pop();
            }
        }
        while(!st.empty())  
        {
            cnt++;
            st.pop();
        }

        cout << cnt/2 << endl;
    }
    return 0;
}


