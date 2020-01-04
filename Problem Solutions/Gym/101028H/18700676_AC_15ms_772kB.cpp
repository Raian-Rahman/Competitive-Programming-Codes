#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;
    int n,d,r;
    int arr1[100005],arr2[100005];
    while(t--){
        memset(arr1,0,sizeof(arr1));
        memset(arr2,0,sizeof(arr2));
        cin >> n >> d >> r;
        int cnt = 0;
        int a = d,b = r;
        while(1)
        {
            cnt++;
            a = a%n;
            b=  b%n;
            arr1[a] = 1;
            arr2[b] = 1;
            if(arr1[a] == arr2[a] or arr1[b] == arr2[b])
            {
                cout << cnt << '\n';
                break;
            }
            a += d;
            b += r;
        }
    }
    return 0;
}
