#include<bits/stdc++.h>
using namespace std;

int factorial(int number)
{
    if(number==0 or number==1)
    {
        return 1;
    }
    return number*factorial(number-1);
}

int main()
{
    int number;
    cin >> number;
    cout << factorial(number) << endl;
    return 0;
}