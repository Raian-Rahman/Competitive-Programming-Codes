#define fariha                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL)

#include <bits/stdc++.h>
using namespace std;
#define MAX 31999


vector<long long> primes;

bitset<320000> isPrime;

void sieve()
{
    for (long long i = 3; i * i <= MAX; i++)
    {
        if (!isPrime[i])
        {
            for (long long j = i * i; j <= MAX; j += i)
            {
                isPrime[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (long long i = 3; i <= MAX; i += 2)
    {
        if (!(isPrime[i]))
            primes.push_back(i);
    }

    for (long long i = 0; i < 100; ++i)
        cout << primes[i] << " ";
}

int main()
{
    //fariha;
    sieve();
    return 0;
}