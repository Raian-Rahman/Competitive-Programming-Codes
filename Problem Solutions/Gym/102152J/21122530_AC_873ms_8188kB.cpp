#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    scanf("%lld",&t);
    for(long long i=0;i<t;i++)
    {
        long long ro,col;
        scanf("%lld %lld",&ro,&col);
        long long arr[ro+5][col+5];
        unordered_map<long long,long long>m1;
        long long res=0;
        for(long long i=0;i<ro;i++)
        {
            unordered_map<long long,long long>m2;
            for(long long j=0;j<col;j++)
            {
                scanf("%lld",&arr[i][j]);
                m2[arr[i][j]]++;
            }
               unordered_map<long long,long long>::iterator it;
            if(i!=0)
            {

                for(it=m2.begin();it!=m2.end();it++)
                {
                    long long p=it->first;
                    res+=min(m2[p],m1[p]);
                }
            }
            for(it=m1.begin();it!=m1.end();it++)    it->second=0;
            m1=m2;
        }
        printf("%lld\n",res)  ;

    }
    return 0;
}
