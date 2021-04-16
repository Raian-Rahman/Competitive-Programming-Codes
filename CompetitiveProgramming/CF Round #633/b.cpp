
#include <stdio.h>
#include <math.h>

long long max(long long ara[], unsigned size)
{
    long long m=ara[0];

    for (int x=1; x<size; x++) if(ara[x]>m) m=ara[x];

    return m;
}

long long min(long long ara[], unsigned size)
{
    long long m=ara[0];

    for (int x=1; x<size; x++) if(ara[x]<m) m=ara[x];

    return m;
}

int main()
{
unsigned t;
scanf("%u", &t);

while(t--)
{
unsigned n, i;
scanf("%u", &n);
long long ara[n], dif[n-1];
for(i=0; i<n; ++i)
{
scanf("%lld", &ara[i]);
dif[i]=ara[i]-max(ara, i);
}
long long m=min(dif, n);
if(m>=0)
{
puts("0");
continue;
}
m*=-1;
long long ans=1+floor(log(m*1.0)/log(2.0));
printf("%lld\n", ans);
}
return 0;
}
