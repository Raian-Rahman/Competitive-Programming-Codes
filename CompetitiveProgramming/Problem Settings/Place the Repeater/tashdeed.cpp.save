#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vii vector<int>
#define pii pair<int,int>
#define pll pair<long long,long long>
#define pdd pair<double,double>
#define pldld pair<long long double, long long double>
#define ff first
#define ss second
#define pb push_back
#define read freopen("alu.txt","r",stdin);
#define write freopen("vorta.txt","w",stdout);
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define PI 2*acos(0.0)
#define eps 1e-11
#define DEBUG(x) cerr << #x << " = " << x << endl
//#pragma comment(linker, "/stack:200000000")
//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

const int MAX = 2e5 + 5, MOD = 1e9 + 7, MAXLG = log2(MAX)+1;
const ll inf = 1e18 + 5;

typedef double doubleType;
bool eq(doubleType a, doubleType b)
{
    return fabs( a - b ) < eps;    //use fabsl for long double
}
int sgn(doubleType value)
{
    if(eq(value, 0)) return 0; //colinear
    if(value + eps < 0) return -1; //right or cw
    return +1; //left or ccw
}

struct point
{
    doubleType x,y;
    point() {}
    point(doubleType x, doubleType y) : x(x), y(y) {}
};

point operator + (const point &p, const point &q)
{
    return point(p.x + q.x, p.y + q.y);
}
point operator - (const point &p, const point &q)
{
    return point(p.x - q.x, p.y - q.y);
}
point operator * (const point &p, doubleType v)
{
    return point(p.x * v, p.y * v);
}
point operator / (const point &p, doubleType v)
{
    return point(p.x / v, p.y / v);
}
bool operator == (const point &p, const point &q)
{
    return (eq(p.x, q.x) && eq(p.y, q.y));
}
bool operator != (const point &p, const point &q)
{
    return !(eq(p.x, q.x) && eq(p.y, q.y));
}
bool operator < (const point &p, const point &q)
{
    return fabs(p.x - q.x) > eps ? (p.x < q.x) : (p.y < q.y);
}
ostream& operator << (ostream& os, const point p)
{
    return os << "(" << p.x << ", " << p.y << ")";
}

doubleType dot(point p, point q)
{
    return (p.x * q.x + p.y * q.y);
}
doubleType cross(point p, point q)
{
    return (p.x * q.y - q.x * p.y);
}
doubleType norm(point p)
{
    return sqrt( dot(p,p) );
}
doubleType sqlen(point p)
{
    return dot(p,p);
}
doubleType sqdist(point p, point q)
{
    return dot(q-p, q-p);
}

point rotate(point p, doubleType theta, point axis = point(0,0))
{
    p = p - axis;
    return axis + point(p.x * cos(theta) - p.y * sin(theta), p.x * sin(theta) + p.y * cos(theta));
}

int arr[MAX];
int main()
{

    fastio;
    int t;
    cin >> t;
    while(t--)
    {
        doubleType xt,yt,x,y;
        cin >> xt >> yt >> x >> y;
        int k;
        cin >> k;

        point center = point(xt,yt);
        point rep = point(x,y);
        doubleType theta = 2*PI / k;
        k--;

        while(k--)
        {
            rep = rotate(rep, theta, center);
            cout << fixed << setprecision(9) << rep.x << " " << rep.y << "\n";
        }
    }
}
