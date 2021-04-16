#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        long long int p;
        long long int rp=0;
        scanf("%lld",&p);

        long long int cnt=1;
       while(1)
        {
            long long int lp=p;
            rp=0;

            while(lp>0)
            {
                rp=rp*10+lp%10;
                lp=lp/10;

            }
            if(rp==p)
            {
                printf("%lld %lld\n",cnt-1,rp);
                break;
            }

            else
            {
              //  printf("%lld %lld\n",p,rp);
                p=rp+p;

            }
            cnt++;

        }

    }
    return 0;
}
