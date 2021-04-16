#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<cmath>
 
 
using namespace std;
#define PI 3.14159265
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        double ra,rb,rc;
        scanf("%lf %lf %lf",&ra,&rb,&rc);
        double a,b,c,A,B,C;
        double s;
        a = rb + rc;
        b = ra + rc;
        c = rb + ra;
        A = acos((b*b+c*c-a*a)/(2*b*c));
        B = acos((c*c+a*a-b*b)/(2*a*c));
        C = acos((a*a+b*b-c*c)/(2*a*b));
        s = (a+b+c)/2;
        double area;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
 
        //printf("Case %d: ",i+1);
        area = area - (0.5)*(ra*ra*A+rb*rb*B+rc*rc*C);
        printf("%.10lf\n",area);
    }
    return 0;
}