//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#define O_o ios_base::sync_with_stdio(0)
#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define o_O ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define fixedprecision(n) cout<<fixed<<setprecision(n)
#define endl '\n'
#define CASE(n) cout << "Case " << n << ":\n"
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl
int main()
{
    O_O;
    long long t=1;
    cin >> t;
    long long T=t;
    while(t--)
    {
        int q;
        cin >> q;
        int sum =-1;

        CASE(T-t);
        stack<int>st;
        while(q--)
        {
            char ch;
            cin >> ch;
            if(ch=='A')
            {
                int x=0;
                cin >> x;
                sum = max(sum,x);
                st.push(sum);
            }
            else if(ch=='R')
            {
                if(st.size()!=0)
                {
                    st.pop();
                    if(!st.empty()) sum = st.top();
                    else            sum = -1;
                }
            }
            else if(ch=='Q')
            {
                if(st.size()==0)
                {
                    cout << "Empty\n";
                }
                else
                {
                   // cout << "fafa\n";
                    cout << st.top() << endl;
                }
            }
            //cout << st.size() << endl;
        }
    }
    return 0;
}

