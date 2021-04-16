#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FASTIO ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL)


long long product(long long x)
{
    long long p = 1;
    while (x)
    {
        p *= x % 10;
        x /= 10;
    }
    return p;
}


long long Res(long long l, long long r)
{

    string a = to_string(l);
    string b = to_string(r);
    long long ans = r;
    for (long long i = 0; i < b.size(); i++)
    {
        if (b[i] == '0')
            continue;

        string curr = b;
        curr[i] = ((curr[i] - '0') - 1) + '0';

        for (long long j = i + 1; j < curr.size(); j++)
            curr[j] = '9';

        long long num = 0;
        for (auto c : curr)
            num = num * 10 + (c - '0');

        if (num >= l && product(ans) < product(num))
            ans = num;
    }

    return ans;
}

int main()
{
    FASTIO;
    long long l,r;
    cin >> l >> r;
    cout << Res(l, r) << '\n';
    return 0;
}
