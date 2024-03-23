#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, count = 0;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A, A + N);
        for (int i = 0; i < N - 1; i++)
        {
            if (A[i] == A[i + 1])
            {
                count++;
            }
        }
        if (count > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}