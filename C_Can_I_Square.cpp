// https://codeforces.com/contest/1915/problem/C
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
        int A[N];
        long long int S = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            S += A[i];
        }
        long long int SR = sqrt(S);
        if (SR * SR == S)
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