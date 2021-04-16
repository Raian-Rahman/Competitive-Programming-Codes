#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t=1;
   // cin >>t;
    while(t--)
    {
        int x;
        cin >> x;
        if(x%2==0)  cout << x-2<< endl;
        else        cout << x-1 << endl;
    }
    return 0;
}
