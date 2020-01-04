#include<iostream>
#include<cstdio>
 
using namespace std;
 
int binary(int n)
{
    int dig[8];
    int i=0;
    while(n!=0)
    {
        dig[i]=n%2;
        n=n/2;
        i++;
    }
 
    int digit=0;
    int x=i-1;
    for(i=x;i>=0;i--)
    {
        digit=digit*10+dig[i];
    }
    //printf("%d\t",digit);
    return digit;
}
 
int main()
{
    int n1,n2,n3,n4,b1,b2,b3,b4;
    int rem;
    int t,l;
    scanf("%d",&t);
    for(l=0;l<t;l++)
    {
 
    scanf("%d.%d.%d.%d",&n1,&n2,&n3,&n4);
    scanf("%d.%d.%d.%d",&b1,&b2,&b3,&b4);
    int n=n1;
    int i=0;
    if(binary(n1)==b1 && binary(n2)==b2 && binary(n3)==b3 && binary(n4)==b4)
        printf("Case %d: Yes\n",l+1);
    else
        printf("Case %d: No\n",l+1);
    }
    return 0;
}