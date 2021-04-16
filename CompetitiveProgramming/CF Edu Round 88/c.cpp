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


#define inf 10000
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

map<long long,pair<long long,long long>>ans;

long long isPrime(long long number)
{
    if(vis[number]) return 0;
    else            return 1;
}

long long primeDivisor(long long num)
{
    long long cur=0;
    long long res=1;
    long long Num=num;
    long long f=0;
    set<long long>st;
    for(long long i=0;i<primes.size() and primes[i]*primes[i]<=num and num;i++)
    {
        long long cnt=0;
        if(num%primes[i]==0)
        {
           // cout << primes[i] << endl;
            f++;
            st.insert(primes[i]);
        }
        while(num%primes[i]==0)
        {
            num/=primes[i];
            cnt++;
            if(num==0 or num==1)    break;
        }
        if(num!=1 and f==1)
        {
            st.insert(num);
            f++;
            break;
        }
    }
    if(f>=2)
    {
        auto it = st.begin();
        long long xx = *it;
        it++;
        long long yy = *it;
        ans[Num]=make_pair(xx,yy);
        //cout << ans[Num].first << ' ' << ans[Num].second << endl;
        return 1;
    }
    else
    {
        ans[Num]={-1,-1};
        return 0;
    }
}




int main()
{
    sieve();
    long long t=1;
    //scanf("%lld",&t);
    long long T = t;
    long long num;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<pair<long long,long long>>vv;
        long long arr[n+5];
        for(long long i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        map<long long,long long>MM;
        for(long long i=0;i<n;i++)
        {
            if(isPrime(arr[i]))
            {
                ans[arr[i]]=make_pair(-1,-1);
            }
            else if(MM[arr[i]]==0)     primeDivisor(arr[i]);

            vv.push_back(make_pair(ans[arr[i]].first,ans[arr[i]].second));
            MM[arr[i]]++;

        }
        for(long long i=0;i<n;i++)    cout << vv[i].first << ' ';
        cout << endl;
        for(long long i=0;i<n;i++)    cout << vv[i].second << ' ';
        cout << endl;
    }
    return 0;
}


