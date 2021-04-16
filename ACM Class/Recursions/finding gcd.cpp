#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main()
{
    cout << gcd(12,4) << endl;
    cout << gcd(12,5) << endl;
    cout << gcd(12,6) << endl;
    
    return 0;
}

/*
output: 
4
1
6
*/