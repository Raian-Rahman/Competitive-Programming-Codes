#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t=1;
   // cin >>t;
    while(t--)
    {
        double x1,y1,r1,x2,y2,r2;
        cin >> x1>>y1 >> r1 >> x2 >>y2>> r2;
        double d = sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
        //r1=  r1*r1;
        //r2 = r2*r2;
        //cout << r1 << ' ' << r2 << ' ' << d << endl;
        if(x1==x2 and y1==y2 and r1==r2)   cout << -1 << endl;
        else if(x1==x2 and y1==y2 and r1!=r2)   cout << 0 << endl;
        else
        {
            if(d<r1 or d<r2)
            {
                if(abs(r1-r2)==d)   cout << 1 << endl;
                else if(abs(r1-r2)<d)    cout << 2 << endl;
                else if(abs(r1-r2)>d)   cout << 0 << endl;
            }
            else
            {
                if(r1+r2==d)   cout << 1 << endl;
                else if(r1+r2>d)    cout << 2 << endl;
                else if(r1+r2<d)   cout << 0 << endl;
            }
        }
    }
    return 0;
}

