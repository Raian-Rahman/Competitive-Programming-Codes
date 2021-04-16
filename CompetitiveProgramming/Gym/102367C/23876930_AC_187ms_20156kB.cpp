#include <bits/stdc++.h>

using namespace std;

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0);
#define endl            "\n"



int main()
{
    FastRead

    int n,ans=0;

    cin>>n;

    char s[n+5][n+5];

    map<pair<int,int>,bool>mp;

    for(int i=0; i<n; i++)
        cin>>s[i];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[i][j]=='K')
            {
                for(int x=-1; x<=1; x++)
                {
                    for(int y=-1; y<=1; y++)
                    {
                        int nx=i+x,ny=j+y;

                        if(nx>=0&&nx<n&&ny>=0&&ny<n&&s[nx][ny]=='*')
                        {
                            mp[{nx,ny}]=true;
                        }
                    }
                }
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[i][j]=='*' and mp[{i,j}]==false)
            {
                if(i+1<n and j+1<n and s[i+1][j+1]=='-')
                {
                    s[i+1][j+1]='p';
                    mp[{i,j}]=true;
                    if(j+2<n)
                        mp[{i,j+2}]=true;
                    ans++;
                }
                else if(i+1<n and j-1>=0 and s[i+1][j-1]=='-')
                {
                    s[i+1][j-1]='p';
                    mp[{i,j}]=true;
                    ans++;
                }
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]=='*' and mp[{i,j}]==false)
                {
                    cout<<-1<<endl;
                    return 0;
                }

        }
    }
    

    cout<<ans<<endl;
}
