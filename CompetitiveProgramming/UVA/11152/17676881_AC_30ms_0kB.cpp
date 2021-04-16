#include<bits/stdc++.h>

using namespace std;
#define PI 2*acos(0.0);

int main()
{
    double  a,b,c,s;
    while(cin >> a >> b >> c)
    {
        double tarea, AREA, area;
        double R,r;

        s=(a+b+c)/2.0;
        tarea=sqrt(s*(s-a)*(s-b)*(s-c));
        R=(a*b*c)/(4*tarea);
        r=tarea/s;
        area=2*acos(0.0)*r*r;
        AREA=2*acos(0.0)*R*R;
        //cout << 2*acos(0.0) << " ";
        //cout << AREA- tarea << " "  << tarea-area << " "  << area   << "\n";
        printf("%.4lf %.4lf %.4lf\n",AREA- tarea,tarea-area ,area);
    }
        return 0;
}
