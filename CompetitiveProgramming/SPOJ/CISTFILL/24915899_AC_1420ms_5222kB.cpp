#include<bits/stdc++.h>
using namespace std;

class cl
{
public:
    double st, ed, ww, dd;
};
//bool operator<(const cl &a, const cl &b)
//{
//    return a.ed<b.ed;
//}

bool cmp1(cl a, cl b)
{
    if(a.st != b.st)
        return a.st < b.st;
    return a.ed < b.ed;
}


int main()
{
    int t, n, i, j, it;
    cl c[50009], temp;
    double lo, hi, mid, v, ans, filled, total;
    cin >> t;
    while(t--)
    {
        total = 0;
        cin >> n;
        hi=0,lo=LONG_MAX;
        for(i = 0; i < n; i++)
        {
            cin >> c[i].st >> c[i].ed >> c[i].ww >> c[i].dd;
            total += c[i].ed*c[i].ww*c[i].dd;

            c[i].ed += c[i].st;
            hi = max(hi,c[i].ed);
            lo = min(lo,c[i].st);
        }

        cin >> v;
        if(v > total)
        {
            cout << "OVERFLOW" << endl;
            continue;
        }

        sort(c, c+n, cmp1);

        it=1000;
        while(it--)
        {
            mid = (lo + hi)/2;
            filled = 0;
            for(i = 0; i < n; i++)
            {
                if(c[i].ed < mid)
                    filled += (c[i].ed - c[i].st)*c[i].dd*c[i].ww;
                else if(c[i].st < mid)
                    filled += (mid - c[i].st)*c[i].dd*c[i].ww;
                else
                    break;
            }

            if(filled >= v)
                hi = mid;
            else
                lo = mid;
        }

        cout << fixed;
        cout << setprecision(2) << lo << endl;
    }
}
