#include<bits/stdc++.h>


using namespace std;


string input[105];

int main()
{
    int pos = 0;
    int longest = 0;
    while (getline(cin, input[pos]))
    {
        if (input[pos].size() > longest)
            longest = input[pos].size();
        ++pos;
    }

    for (int j = 0; j < longest; ++j)
    {
        for (int i = pos - 1; i >= 0; --i)
        {
            if (input[i].size() > j)
                cout << input[i][j];
            else
                cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
