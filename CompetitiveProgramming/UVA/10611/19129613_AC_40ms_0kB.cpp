#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v;
    vector<int>::iterator it,it1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int q;
    cin >> q;
    while(q--)
    {
        int c;
        cin >> c;
        it=upper_bound(v.begin(),v.end(),c);
        it1=lower_bound(v.begin(),v.end(),c);
        if(*(it1-1)==0)  cout << 'X' << ' ';
        else    cout << *(it1-1) << ' ';

        if(*(it)==0)  cout << 'X' << '\n';
        else    cout << *(it) << '\n';


    }
    return 0;
}
