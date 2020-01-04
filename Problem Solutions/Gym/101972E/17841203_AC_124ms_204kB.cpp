#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
     //   cout << "new loop \n";
        int n,m,k;
        cin >> n >> m >> k;
        vector< pair<char,bool> > sz;
        char ch;
        for(int i=0;i<n;i++)
        {
       //     cout << " inpt opt ";
            char ch;
            scanf(" %c",&ch);
            if(i<k)
            {
                sz.push_back(make_pair(ch,1));
            }
            else
            {
                sz.push_back(make_pair(ch,0));
            }
        }
        int cnt=0;
        int key=k;
        //char ch;
        int pre;
        //cout << m << endl;
        for(int i=0;i<m;i++)
        {
            //cout << "   NO ID   ";
            //int kk;
            scanf(" %c",&ch);
            if(ch=='W') scanf("%d",&pre);
            else if(ch=='A')    key=n;
            if(ch=='W')
            {
                if(pre<=key and sz[pre-1].first=='S')
                {
                  //  cout << "in con";
                    cnt++;
                }
                if(ch=='W' && pre>key)   key=pre;
            }
            //cout << "End";
        }

        cout << cnt << "\n";
    }
    return 0;
}
