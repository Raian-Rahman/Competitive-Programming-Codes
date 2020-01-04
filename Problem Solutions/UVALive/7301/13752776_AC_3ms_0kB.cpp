#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cstdio>

using namespace std;


int main()
{
    int t,i,j,k;
    cin>> t;
    for(i=0;i<t;i++)
    {
        int n,totaltym,total=0,point=0;
        cin>>n>> totaltym;
        int tym[n];
        for( j=0;j<n;j++)
            cin>> tym[j];
        for( j=0;j<n;j++)
        {
            for( k=j+1;k<n;k++)
            {
                if(tym[j]>tym[k])
                    swap(tym[j],tym[k]);
            }
        }
        for( j=0;j<n;j++)
        {
            if(total+tym[j]>totaltym)
                break;
            total=total+tym[j];
            point=point+total;
        }
        printf("Case %d: %d %d %d\n",i+1,j,total,point);
    }
    return 0;
}
