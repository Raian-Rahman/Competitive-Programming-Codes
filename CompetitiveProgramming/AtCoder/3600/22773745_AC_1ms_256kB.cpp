#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    string s;
    cin >> a >> b;
    int l1 = a.size();
    int l2 = b.size();
    for(int i=0;i<l1;i++)
    {
        if(a[i]=='?' or a[i]==b[0])
        {
            string t = a;
            for(int j=0;j<i;j++)
            {
                if(t[j]=='?')   t[j]='a';
            }
            bool flag =true;
            for(int j=0;j<l2;j++)
            {
                if(a[j+i]==b[j])    continue;
                else if(a[j+i]=='?')    t[j+i]=b[j];
                else flag =false;
            }
            if(flag==true)
            {
                for(int j = i+l2 ; j<l1;j++)    if(t[j]=='?')   t[j]='a';
               // cout << t << '\n';
                s=t;
            }
        }
    }

    if(s.size()==0)
    cout << "UNRESTORABLE\n";
    else    cout << s << '\n';
    return 0;
}
