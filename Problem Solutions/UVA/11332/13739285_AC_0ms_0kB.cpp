#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n)!=0)
    {
        if(n==0)
            break;
        long long int sum=0;
        while(1)
        {
            long long int n1;
            n1=n;
            while(n1>0)
            {
                sum=sum+n1%10;
                n1=n1/10;
            }
            n=sum;
            if(n/10==0)
                break;
            else
                sum=0;
           // printf("%d %d\n",n,sum);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
