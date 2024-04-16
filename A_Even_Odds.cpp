#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll N, K, Even, Odd;
    cin >> N >> K;
    if (N % 2 == 1)
    {
        Odd = (N / 2) + 1;
        Even = N / 2;
    }
    else
    {
        Odd = N / 2;
        Even = N / 2;
    }
    if (K <= Odd)
    {
        ll Exact_Position = K - 1;
        cout << (2 * Exact_Position) + 1 << endl;
    }
    else
    {
        ll Exact_Position = K - Odd;
        cout << 2 * Exact_Position << endl;
    }

    return 0;
}