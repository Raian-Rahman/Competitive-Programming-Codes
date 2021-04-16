#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

struct eachQuery{
    int commandType;
    int key;
};


void solve(int noOfQueries,vector<struct eachQuery>queries)
{
    set<int>mySet;
    set<int>::iterator it;
    for(int i=0; i<noOfQueries; i++)
    {
        int choice = queries[i].commandType;
        if(choice==1)
        {
            int key = queries[i].key;
            mySet.insert(key);
        }
        else
        {
            if(mySet.size()<=1)   cout << "Invalid Command";
            else
            {
                int pp=0;
                for(it = mySet.begin();it!=mySet.end();pp++,it++)
                {
                    if(pp%2==1)
                        cout << *it << ' ';
                }
            }

            cout << endl;
        }
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int noOfQueries;
    cin >> noOfQueries;
    vector<eachQuery>queries;
    for(int x=0;x<noOfQueries;x++)
    {
        int choice;
        cin >> choice;
        if(choice==1)
        {
            int x;
            cin >> x;
            struct eachQuery  temp;
            temp.commandType = 1;
            temp.key = x;
            queries.push_back(temp);
        }
        else
        {
            struct eachQuery  temp;
            temp.commandType = 2;
            queries.push_back(temp);
        }
    }
    solve(noOfQueries,queries);
    return 0;
}
