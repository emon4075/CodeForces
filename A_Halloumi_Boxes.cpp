#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        if (is_sorted(A, A + N) || K > 1)
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