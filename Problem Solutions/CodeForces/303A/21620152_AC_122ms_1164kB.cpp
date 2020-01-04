#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%2==0)  cout << -1 << endl;
    else
    {
        int a[n+5],b[n+5],c[n+5];
        for(int i=0;i<n;i++)
        {
            a[i]=i;
            b[i]=i%n;
            c[i]=(a[i]+b[i])%n;
        }
        for(int i=0;i<n;i++)    cout << a[i] << ' ';
        cout << endl;
        for(int i=0;i<n;i++)    cout << b[i] << ' ';
        cout << endl;
        for(int i=0;i<n;i++)    cout << c[i] << ' ';
        cout << endl;
    }
    return 0;
}
