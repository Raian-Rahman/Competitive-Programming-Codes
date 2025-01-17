/*
    Author : RAJON BARDHAN
    AUST CSE 27th Batch
    All my programming success are dedicated to my mom , dad , little sister madhobi , teachers , friends and love TANIA SULTANA RIMY

    Problem Name : 1203 - Guarding Bananas ( LightOJ )
    ALGORITHM : Geometry
*/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define PI 3.14159265358979323846

typedef long long ll ;
typedef unsigned long long ull ;

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction

struct Point
{
    long long x , y ;
};
Point arr[100000+10] , ans[100000+10] ;
stack < Point > S ;
long long dist(Point P,Point Q)
{
    return (P.x-Q.x)*(P.x-Q.x)+(P.y-Q.y)*(P.y-Q.y) ;
}
double calc(Point A,Point B,Point C)
{
    double a = sqrt((double)dist(A,B));
    double b = sqrt((double)dist(B,C));
    double c = sqrt((double)dist(C,A));
    return acos((b*b-c*c-a*a)/(-2*a*c));
}
int orientation(Point P,Point Q,Point R)
{
    long long ret = (Q.y-P.y)*(R.x-Q.x) - (Q.x-P.x)*(R.y-Q.y) ;
    if(ret<0) return 2;
    if(ret>0) return 1;
    return ret ;
}
bool cmp(Point X , Point Y)
{
    int ret = orientation(arr[0],X,Y);
    if(ret==0)
    {
        long long dist1 = dist(arr[0],X);
        long long dist2 = dist(arr[0],Y);
        return dist1 < dist2 ;
    }
    else if(ret==2) return true ;
    else return false ;
}
Point nextToTop()
{
    Point P = S.top();
    S.pop();
    Point res = S.top();
    S.push(P);
    return res;
}
double convexHull(int N)
{
    int ymin = arr[0].y , index = 0 ;
    for(int i=1;i<N;i++)
    {
        if(arr[i].y<ymin||(arr[i].y==ymin&&arr[i].x<arr[index].x))
        {
            ymin = arr[i].y ;
            index = i ;
        }
    }

    swap(arr[0],arr[index]);
    sort(&arr[1],&arr[N],cmp);
    S.push(arr[0]);

    for(int i=1;i<N;i++)
    {
        while(S.size()>1&&orientation(nextToTop(),S.top(),arr[i])!=2) S.pop();
        S.push(arr[i]);
    }

    int cnt = 0 ;
    while(!S.empty())
    {
        ans[cnt++]=S.top() ;
        S.pop();
    }

    vector < Point > V ;
    for(int i=cnt-1;i>=0;i--) V.pb(ans[i]) ;

    cnt = V.size() ;
    if(cnt<3) return 0.0 ;
    double ret = 1258.0 ;
    for(int i=0;i<V.size();i++) cout << V[i].x << ' ' << V[i].y << endl;
    for(int i=0;i<cnt;i++)
    {
        int j = (i+1)%cnt;
        int k = (i-1+cnt)%cnt;
        ret = min(ret,(calc(V[i],V[j],V[k])*180)/PI);
    }
    return ret ;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T ;
    scanf("%d",&T);
    for(int cas=1;cas<=T;cas++)
    {
        int N ; // N is the number of points .
        scanf("%d",&N);
        for(int i=0;i<N;i++) scanf("%lld%lld",&arr[i].x,&arr[i].y);
        cout << "Case " << cas << ": " << setprecision(10) << fixed << convexHull(N) << endl ;
    }
    return 0;
}
