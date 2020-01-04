#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int gcdcheck(int x, int y)
{
    if(y==0)
        return x;
    else return gcdcheck(y, x%y);
}


int main()
{
    int t,arr[1050];
    scanf("%d",&t);
    getchar();
    string str;
    while(t--)
    {
        getline(cin,str);
        stringstream ss(str);
        int j=0;
        while(ss>>arr[j])
               ++j;
        int gcd=0;
        for(int i=0; i<j; i++)
        {
            for(int l=i+1; l<j; l++)
            {
                gcd = max(gcd ,gcdcheck(arr[i], arr[l]));

            }
        }
        printf("%d\n",gcd);
    }
    return 0;
}
