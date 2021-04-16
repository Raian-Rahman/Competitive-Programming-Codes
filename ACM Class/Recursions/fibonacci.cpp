#include<bits/stdc++.h>
using namespace std;

int memo[100];

//memoize korbo

int fibonacci(int number)
{
    if(number==0)   return 1;
    if(number==1)   return 1;
    if(memo[number]==0) memo[number] = fibonacci(number-1)+fibonacci(number-2);   
    return memo[number];
}

int main()
{
    memset(memo,0,sizeof(memo));
    int number = 0;
    cin >> number;
    cout << fibonacci(number-1) << endl;
}

/*
series: 1 1 2 3 5 8 13 21 ....
*/