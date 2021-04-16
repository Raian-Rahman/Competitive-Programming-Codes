#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin,s);
        int f=0,c=0;
        int ff=0;
        int len=s.size();
        string ss="miao.";
        for(int i=0;i<5;i++)
        {
            if(s[i]==ss[i]) ff++;
        }
        if(ff==5)   c=1,f++;
        ff=0;
        ss="lala.";
        for(int i=len-5,j=0;i<len;i++,j++)
        {
            //            cout << s[i] ;
            if(s[i]==ss[j]) ff++;
        }
        if(ff==5)   c=2,f++;

        if(f!=1)    cout << "OMG>.< I don't know!\n";
        else
        {
            if(c==2)    cout << "Freda's\n";
            else        cout << "Rainbow's\n";
        }
    }
    return 0;
}
