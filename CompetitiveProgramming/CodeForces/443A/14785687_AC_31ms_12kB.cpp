#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int cnt[26]={0};
    int total=0;
    getline(cin,str);

    //for(int i=0;i<26;i++)
    //    cout << cnt[i] << endl;
     for(int i=1;i<str.size();i+=3)
     {
        if(cnt[str[i]-97]==0)
        {
            cnt[str[i]-97]++;
            total++;

        }

        //printf("%c ",str[i]);
    }
    cout << total << endl;
    //cout << str;
    return 0;
}
