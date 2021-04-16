#include<bits/stdc++.h>
    using namespace std;

    map<string,string> m;

    int main()
    {
        string str,s1,s2;
        m.clear();
        while(getline(cin,str)){
            if(str == "")
                break;
            int i;
            int len = str.size();
            s1 = "";s2 = "";
            for(i = 0; i < len; i++)
			{
                if(str[i] == ' ')
                    break;
                s1 += str[i];
            }
            for(i++; i < len; i++)
                s2 += str[i];
            m[s2] = s1;
        }
        while(cin>>str)
		{
            if(m[str] != "")
                cout<<m[str]<<endl;
            else
                cout<<"eh"<<endl;
        }
        return 0;
    }