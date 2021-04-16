#include<bits/stdc++.h>

using namespace std;

long long arr[]={50,25,10,5,1};
long long mem[30005][5];

long long dp(long long a, long long b)
{
    if(a==0) return 1;
    if(a<0) return 0;
    if(b>4) return 0;

    if(mem[a][b]!=-1) return mem[a][b];

    long long x=dp(a-arr[b],b)+dp(a-arr[b+1],b+1)+dp(a-arr[b+2],b+2)+dp(a-arr[b+3],b+3)+dp(a-arr[b+4],b+4);
    mem[a][b]=x;
    return x;
}

int main(){
    long long x;
	memset(mem,-1,sizeof(mem));
    while(cin>>x)
	{
		long long ans=dp(x,0);
		if(ans>1 )	cout<< "There are " << ans<< " ways to produce " << x <<" cents change."<<'\n';
		else if(ans<2 )	cout<< "There is only " << ans<< " way to produce " << x <<" cents change."<<'\n';
	}
    return 0;
}