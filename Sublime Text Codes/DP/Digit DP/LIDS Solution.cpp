#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> up(10),down(10);
ll dp[11][11][11][2][2][2];
int ans;
ll call(int ps,int ld,int sz,bool l,bool r,bool f){
	if(ps==10) return ans==sz;
	ll &res=dp[ps][ld+1][sz][l][r][f];
	if(res!=-1) return res;
	int li=l?0:down[ps];
	int rl=r?9:up[ps];
	res=0;
	for(int i=li;i<=rl;i++){
		res+=call(ps+1,ld,sz,l||(i>li),r||(i<rl),f||i);
		if(i>ld&&(f||i))res+=call(ps+1,i,sz+1,l||(i>li),r||(i<rl),f||i);
	}
	return res;
}
void init(ll a,ll b){
	int i=0;
	while(i<10){
		up[i]=b%10,b/=10;
		down[i++]=a%10,a/=10;
	}
	reverse(up.begin(),up.end());
	reverse(down.begin(),down.end());
}
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		ll a,b;
		cin>>a>>b;
		init(a,b);
		printf("Case %d: ", i);
		ans=9;
		while(ans){
			memset(dp,-1,sizeof(dp));
			ll c=call(0,-1,0,0,0,0);
			if(c){cout<<ans<<" "<<c<<endl;break;}
			ans--;
		}
	}
}