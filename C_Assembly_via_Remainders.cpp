#include <bits/stdc++.h>
using namespace std;
int main()
{
    long T;
    cin >> T;
    while (T--)
    {
        long N;
        cin >> N;
        vector<long> X(N - 1);
        for (long i = 0; i < N - 1; i++)
        {
            cin >> X[i];
        }
        vector<long> A(N);
        long A1 = 10000;
        A[0] = A1;
        for (long i = 1; i < N; i++)
        {
            A[i] = (A[i - 1] * 1) + X[i - 1];
        }
        for (auto I : A)
        {
            cout << I << " ";
        }
        cout << endl;
    }

    return 0;
}
