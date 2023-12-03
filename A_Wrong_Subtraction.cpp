// https://codeforces.com/problemset/problem/977/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    while (K--)
    {
        if (N % 10 == 0)
        {
            N = N / 10;
        }
        else
        {
            N = N - 1;
        }
    }
    cout << N << endl;
    return 0;
}