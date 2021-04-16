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
#define CASE(n) cout << "Case " << n << ": "
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl

struct box{
    double h,b,area;
}box[500005];;

long long check_dif(double p,double q)
{
    if(abs(p-q)<.00000001)  return 0;
    else if(p>q)    return 1;
    else        return -1;
}


int main()
{
    O_O;
    long long t;
    cin >> t;
    long long T=t;
    while(t--)
    {
        double n;
        cin >> n;
        double total_vol=0;

        double maxh=LONG_MIN,minh=LONG_MAX;
        for(long long i=0;i<n;i++)
        {
            double bb,hh,w,d;
            cin >> bb >> hh >> w >> d;
            total_vol+=hh*w*d;
            box[i].area = w*d;
            box[i].b=bb;
            box[i].h=hh;
            maxh=max(maxh,bb+hh);
            minh=min(minh,bb);
        }
        double vol= 0;
        cin >> vol;
        if(vol>total_vol)
        {
            cout << "OVERFLOW\n";
            continue;
        }
        while(maxh-minh>0.0001)
        {
          //  cout << maxh << ' ' << minh << endl;
            double mid = (minh+maxh)/2;
            double res =0;
            for(long long i=0;i<n;i++)
            {
                if(check_dif(box[i].b,mid)>0)
                {

                }
                else
                {
                    res+= box[i].area* min((double)(box[i].h),(double)(mid-box[i].b));
                }

            }
            int p = check_dif(res,vol);
            if(p>=0)
            {
                maxh = mid;
            }
            else minh =mid;

        }

        fixedprecision(2);
        cout << minh << endl;

    }
    return 0;
}

