// https://codeforces.com/problemset/problem/1335/A
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
        if (N % 2 == 0)
        {
            N = (N / 2) - 1;
            cout << N << endl;
        }
        else
        {
            N = (floor)(N / 2);
            cout << N << endl;
        }
    }

    return 0;
}