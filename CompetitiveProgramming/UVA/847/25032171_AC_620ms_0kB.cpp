#include<bits/stdc++.h>
using namespace std;

bool func (long long p , long long n) {
 if (p * 9 < n && p * 18 >= n) return 0; 
 for (int i = 2; i <= 9; i++) {
  if (func (p * i , n) == 0) return 1; 
 }
 return 0;
}

int main () {
 long long n; 
 while (cin >> n) {
  if (n == 1) puts("Ollie wins."); 
  else if (n >= 2 && n <= 9) puts ("Stan wins.");
  else 
  puts(func (1 , n) ? "Stan wins." : "Ollie wins.");
 }
}