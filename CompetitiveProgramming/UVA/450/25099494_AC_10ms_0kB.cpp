//coded by: pranonrahman-------------------------------------
//-----------------------------------------------------------
//-----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<int, int>, null_type,less<pair<int, int> >, rb_tree_tag,tree_order_statistics_node_update>
#define O_o ios_base::sync_with_stdio(0)
#define O_O ios_base::sync_with_stdio(0); cin.tie(NULL)
#define o_O ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define fixedprecision(n) cout<<fixed<<setprecision(n)
#define endl '\n'
#define CASE(n) cout << "Case " << n << ": "
#define pi acos(-1.0)
#define _____(n) cout << "Dhukse " << n << endl

struct fac{
    string title;
    string f_name;
    string l_name;
    string address;
    string dept;
    string home_phone;
    string workphone;
    string campus_box;
};

bool cmp(fac &a,fac &b)
{
    if(a.l_name<b.l_name)   return 1;
    return 0;
}

int main()
{
    O_O;
    long long t=1;
    //cin >> t;
    long long T=t;
    while(t--)
    {

        int n;
        cin >> n;
        vector<fac>v;
        cin.ignore();
        string dep;
        for(int i=0;i<n;i++)
        {
            getline(cin,dep);
            string s;
            while(1)
            {
                getline(cin,s);
                if(s.size()==0)
                {
                    break;
                }
                stringstream ss(s);
                int cnt=0;
                struct fac ff;

                ff.dept = dep;
                while(ss.good())
                {
                    string sub;
                    getline(ss,sub,',');
                    if(cnt==0)  ff.title=sub;
                    else if(cnt==1) ff.f_name = sub;
                    else if(cnt==2) ff.l_name = sub;
                    else if(cnt==3) ff.address = sub;
                    else if(cnt==4) ff.home_phone = sub;
                    else if(cnt==5) ff.workphone = sub;
                    else if(cnt==6) ff.campus_box = sub;

                    cnt++;
                }
                v.push_back(ff);

            }
        }
        sort(v.begin(),v.end(),cmp);
        for(auto i:v)
        {
            cout << "----------------------------------------\n";
            cout << i.title << ' ' << i.f_name << ' ' << i.l_name << endl;
            cout << i.address << endl;
            cout <<"Department: " << i.dept << endl;
            cout << "Home Phone: " << i.home_phone << endl;
            cout << "Work Phone: " << i.workphone << endl;
            cout << "Campus Box: " << i.campus_box << endl;
        }
    }
    return 0;
}

