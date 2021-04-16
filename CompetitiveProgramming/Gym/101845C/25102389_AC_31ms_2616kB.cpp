//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#define O_o ios_base::sync_with_stdio(0)
#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define o_O ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define fixedprecision(n) cout<<fixed<<setprecision(n)
#define endl '\n'
#define CASE(n) cout << "Case " << n << ": "
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl


map<char,vector<pair<char,int>>>mp;
map<pair<char,char>,int>distt;

#define infinity 1<<30  //2^30
struct node{
    int u;
    int cost;
    node(int _u, int _cost){
        u = _u;
        cost = _cost;
    }
    bool operator < ( const node& p ) const {      return cost > p.cost;   } //Operator overloading

};

int dijstkra(int source,int dddd){

    int distance[1441];
    for(int i=1;i<=140;i++) {
        distance[i] = infinity;
    }

    priority_queue<node>q;
    q.push(node(source,0));
    distance[source] = 0;

    while(!q.empty()){
        node top = q.top();
        q.pop();
        int u=top.u;

        for(int i=0;i<mp[u].size();i++){
            char v=mp[u][i].first;
            int dis = mp[u][i].second;
            if(distance[u] + dis < distance[v]){
                distance[v] = distance[u] +dis;
                q.push(node(v, distance[v]));
            }
        }
    }
    if(distance[dddd]==infinity) return -1;
    else                        return distance[dddd];
}

int parent[400];

void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}


void union_sets(int a,int b)
{
    a=find_set(a);
    b=find_set(b);
    if(a!=b)    parent[b]=a;
}


int arr[700][700];

void floyd_warshal()
{

    for(long long i=0;i<500 ;i++)
    {
        for(long long j=0;j<500;j++)  arr[i][j]=100000;
    }
    for(auto it:mp)
    {
        char u = it.first;
        for(long long i=0;i<mp[u].size();i++)
        {
            arr[u][mp[u][i].first]=min(arr[u][mp[u][i].first],mp[u][i].second);
            //cout << (long long)u << ' ' << (long long)mp[u][i].first << ' ' << arr[u][mp[u][i].first] <<  endl;
        }
    }

    for(long long k=32;k<127;k++)
    {
        for(long long i=32;i<127;i++)
        {
            for(long long j=32;j<127;j++)
            {
                if (arr[i][k] + arr[k][j] < arr[i][j])   arr[i][j] = arr[i][k] + arr[k][j];
            }
        }
    }


}

int main()
{
    O_O;
    long long t=1;
    long long T=t;
    while(t--)
    {
        for(long long i=0;i<200;i++)  parent[i]=i;
        string s1,s2;
        cin >>s1 >> s2;
        long long n;
        cin >> n;
        for(long long i=0;i<n;i++)
        {
            char x,y;
            long long d;
            cin >> x >> y >> d;
            mp[x].push_back({y,d});
            union_sets(x,y);
        }
        long long sum=0;
        floyd_warshal();
        for(long long i=0;i<s1.size();i++)
        {
            if(s1[i]==s2[i])    continue;
            else
            {
                if(arr[s1[i]][s2[i]]==100000)  
                {
                    cout << -1 << endl;
                    return 0;
                }
                sum+=arr[s1[i]][s2[i]];
               // cout << arr[s1[i]][s2[i]] << endl;
            }
        }
        cout <<sum << endl;
    }
    return 0;
}
