#include<bits/stdc++.h>

using namespace std;

int arr[]={50,25,10,5,1};
int mem[7500][5];

int dp(int a, int b)
{
    if(a==0) return 1;
    if(a<0) return 0;
    if(b>4) return 0;

    if(mem[a][b]!=-1) return mem[a][b];

    int x=dp(a-arr[b],b)+dp(a-arr[b+1],b+1)+dp(a-arr[b+2],b+2)+dp(a-arr[b+3],b+3)+dp(a-arr[b+4],b+4);
    mem[a][b]=x;
    return x;
}

int main(){
    int x;
	memset(mem,-1,sizeof(mem));
    while(cin>>x)
	{

		cout<<dp(x,0)<<endl;
	}
    return 0;
}
