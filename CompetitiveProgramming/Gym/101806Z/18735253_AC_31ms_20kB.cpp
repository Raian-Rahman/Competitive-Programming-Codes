#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;

    int i;
    cin >> n;
	int arr[n+5];
    for(i=0;i<n;i++)	cin >> arr[i];
    int a=0,b=2;
    int mx=0;
    while(b<n)
    {
        if((arr[b-2]>=arr[b-1] and arr[b-1]>=arr[b]) or (arr[b]>=arr[b-1] and arr[b-1]>=arr[b-2]) )
        {
            mx=max(mx,b-a);
            a=b-1;
            b++;
        }
        else        b++;
    }
    b--;

	if((arr[b-2]>=arr[b-1] and arr[b-1]>=arr[b]) or (arr[b]>=arr[b-1] and arr[b-1]>=arr[b-2]) )
	{
		mx=max(mx,b-a);
		a=b-1;
		b++;
	}
	else	mx=max(mx,b-a+1);

	cout << mx << '\n';
    return 0;
}