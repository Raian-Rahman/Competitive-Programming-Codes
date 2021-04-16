//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define endl '\n'
#define PI acos(-1.0)
#define CASE(n) cout << "Case " << n << ": "
#define CASE_(n) cout << "Case " << n << endl
#define FIXED(n) cout << fixed << setprecision(n)
#define testPrint(n) cout << "test" << n << endl;


#define inf 1000000
vector<long long>primes;
long long vis[inf+700];

void sieve()
{
    memset(vis,0,sizeof(vis));
    vis[0]=1;
    vis[1]=1;
    for(long long i=4;i<=inf;i+=2)    vis[i]=1;
    for(long long i=3;i*i<=inf;i+=2)
    {
        if(!vis[i])
        {
            for(long long j=i*i;j<=inf;j+=i)  vis[j]=1;
        }
    }
    for(long long i=0;i<=inf;i++) if(!vis[i]) primes.push_back(i);
}

long long primeDivisor(long long num)
{
    long long cur=0;
    long long res=1;
    long long Num=num;
    //cout << num << endl;
    for(long long i=0;i<primes.size() and primes[i]<=num and num;i++)
    {
        long long cnt=0;
     //   cout << i << endl;
        while(num%primes[i]==0)
        {
      //      cout << primes[i] << ' ' << num <<  endl;
            num/=primes[i];
            cnt++;
            if(num==0 or num==1)    break;
        }
        res*=(cnt+1);
    }
    if(num!=1)  res*=2;
    return res;
}

long long reverseNumber(long long number)
{
    long long temp = 0;
    while(number)
    {
        temp*=10;
        temp+=number%10;
        number/=10;
    }
    //cout << temp << endl;
    return temp;
}



long long ModularMultiplication(long long a, long long b, long long m)
{
	long long ret=0, c=a;
	while(b)
	{
		if(b&1) ret=(ret+c)%m;
		b>>=1; c=(c+c)%m;
	}
	return ret;
}
long long ModularExponentiation(long long a, long long n, long long m)
{
	long long ret=1, c=a;
	while(n)
	{
		if(n&1) ret=ModularMultiplication(ret, c, m);
		n>>=1; c=ModularMultiplication(c, c, m);
	}
	return ret;
}
bool Witness(long long a, long long n)
{
	long long u=n-1;
    int t=0;
	while(!(u&1)){u>>=1; t++;}

	long long x0=ModularExponentiation(a, u, n), x1;
	for(int i=1;i<=t;i++)
	{
		x1=ModularMultiplication(x0, x0, n);
		if(x1==1 && x0!=1 && x0!=n-1) return true;
		x0=x1;
	}
	if(x0!=1) return true;
	return false;
}
long long Random(long long n)
{
  long long ret=rand(); ret*=32768;
	ret+=rand(); ret*=32768;
	ret+=rand(); ret*=32768;
	ret+=rand();
  return ret%n;
}
bool IsPrimeFast(long long n, int TRIAL)
{
    if(n == 1)return false;
    if(n == 2)return true;
  while(TRIAL--)
  {
    long long a=Random(n-2)+1;
    if(Witness(a, n)) return false;
  }
  return true;
}

long long SQRT(long long n)
{
    long long lo = 0,hi = 1e9,mid,ans;
    while(lo <= hi){
        mid = (lo + hi)/2;
        if(mid * mid <= n){
            lo = mid + 1;
            ans = mid;
        }else {
            hi = mid - 1;
        }
    }
    return ans;
}

long long unsigned  primeDivisorFaster(long long unsigned  num)
{
    if(num==1)  return 1;
    sieve();
    long long unsigned  ans = 1;
    for(long long unsigned  i=0;i<primes.size() and primes[i]*primes[i]*primes[i]<=num and num;i++)
    {
        long long unsigned  cnt=0;
        while(num%primes[i]==0)
        {
            num=num/primes[i];
            cnt++;
        }
       // cout << num << ' ' <<  primes[i] << ' ' <<  cnt << ' ' << ans << endl;
        ans = ans*(cnt+1);
    }
   // cout << num << endl;
    if(IsPrimeFast(num,4))
    {
    //    cout << "yes\n";
        ans*=2;
    }
    else if(IsPrimeFast(sqrt(num),4) and (sqrt(num)*sqrt(num))==num)    ans*=3;
    else   if(num!=1)     ans= ans*=4;
    return ans;
}


long long isPrime(long long number)
{
    if(vis[number]) return 0;
    else            return 1;
}

int main()
{
    sieve();
    long long t=1;
    //scanf("%lld",&t);
    long long T = t;
    long long num;

    while(scanf("%lld",&num)==1)
    {
        //write your code here
        if(isPrime(num))    cout << 0 << endl;
        else
        {
            int p = upper_bound(primes.begin(),primes.end(),n);
            cout << primes[p]-primes[p-1] << endl;
        }
    }
    return 0;
}


