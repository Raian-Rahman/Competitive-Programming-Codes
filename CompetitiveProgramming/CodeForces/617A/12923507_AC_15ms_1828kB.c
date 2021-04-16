#include<stdio.h>
int main()
{
    int n,min;
    scanf("%d",&n);
    min=n/5;
    n=n%5;
    min=min+n/4;
    n=n%4;
    min=min+n/3;
    n=n%3;
    min=min+n/2;
    n=n%2;
    min=min+n/1;
    n=n%1;
    printf("%d\n",min);
    return 0;
}
