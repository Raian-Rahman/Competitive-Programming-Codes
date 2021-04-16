#include<bits/stdc++.h>
 
using namespace std;
 
 
 
int main()
{
    int t,x;
    cin >> t;
    for(x=0;x<t;x++)
    {
        deque <int> num;
        int siz,com;
 
        cin >> siz >> com;
        cout << "Case " << x+1 << ":\n";
        for(int i=0;i<com;i++)
        {
            string str;
            int n;
            cin >> str ;
            if(str=="pushLeft" || str == "pushRight")
            {
                cin >> n;
                if(num.size()==siz)
                {
                    cout << "The queue is full\n";
 
                }
                else
                {
                    if(str=="pushLeft")
                    {
                        num.push_front(n);
                        cout << "Pushed in left: " << n << "\n";
                    }
                    else if(str == "pushRight")
                    {
                        num.push_back(n);
                        cout << "Pushed in right: " << n << "\n";
 
                    }
                }
 
            }
            else if(str == "popLeft"  || str == "popRight")
            {
                if(num.size()==0)
                {
                    cout << "The queue is empty\n";
                }
                else
                {
                    if(str == "popLeft")
                    {
                        n=num[0];
                        num.pop_front();
                        cout <<  "Popped from left: " << n << "\n";
                    }
                    else if(str=="popRight")
                    {
                        n=num[num.size()-1];
                        num.pop_back();
                        cout <<  "Popped from right: " << n << "\n";
 
                    }
                }
            }
        }
    }
    return 0;
}