#include<bits/stdc++.h>
#define MIN 0
#define MAX 100000000
using namespace std;


int main()
{
    int n,x,i,sum=0;
    int array1[200005]={0};
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> array1[i];
    }
    array1[0]=-1;
    sort(array1+1,array1+n+1);

    for(i=1;i<=n;i++)
    {
        if(array1[i]==array1[i-1])
            sum++;
    }

    cout << sum;
    return 0;
}

