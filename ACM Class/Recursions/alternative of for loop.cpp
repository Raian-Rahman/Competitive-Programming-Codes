#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[],int sz,int position)
{
    if(position == sz)  return 0;
    return arr[position] + sumOfArray(arr,sz,position+1);
}

int main()
{
    int arr[5] = {1,3,5,7,9};
    cout << sumOfArray(arr,5,0);
    return 0;
}

// output will be 81