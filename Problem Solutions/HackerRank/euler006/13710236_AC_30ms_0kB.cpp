#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {

        double n;
        double diff;
        cin>>n;
        diff=-1*((n*(n+1)*((2*n)+1))/6.0)+((n*(n+1)/2.0)*(n*(n+1)/2.0));
        printf("%.0lf\n",diff);
    }
    return 0;
}
