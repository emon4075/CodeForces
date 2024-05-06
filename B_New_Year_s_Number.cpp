#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        while (N > 0)
        {
            if (N % 2020 != 0)
            {
                N -= 2021;
            }
            else
            {
                N = 0;
            }
        }
        if (N == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}