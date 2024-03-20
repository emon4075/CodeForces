#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Primes;
    cin >> N;
    if (N % 2 == 1)
    {
        Primes = N / 2;
        cout << Primes << endl;
        for (int i = 0; i < Primes - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << " ";
    }
    else
    {
        Primes = N / 2;
        cout << Primes << endl;
        for (int i = 0; i < Primes ; i++)
        {
            cout << 2 << " ";
        }
    }
    return 0;
}