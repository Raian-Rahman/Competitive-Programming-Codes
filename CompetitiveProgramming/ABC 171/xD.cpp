#include<bits/stdc++.h>
using namespace std;

int getDiv(string s)
{
    int k =0;
    for(int i=0;i<s.size();i++)
    {
        k+= s[i]-48;
    }
    if(k%3==0)  return 1;
    else return 0;
}

int fun(int i)
{
    int sum = 0;
    string s="";
    for(int j=1;j<=i;j++)
    {
        string temp = "";
        int k=j;
        while(k)
        {
            temp.push_back((k%10)+48);
            k/=10;
        }
        reverse(temp.begin(),temp.end());
        s+= temp;
        sum+= getDiv(s);
    }
    return sum;
}

int main()
{
    for(int i=1;i<=152;i++)
    {
        int x = fun(i);
        cout << i << ' ' <<  x << endl;
    }
}
