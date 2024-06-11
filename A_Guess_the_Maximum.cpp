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
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int MX = INT_MAX;
        for (int i = 0; i < N - 1; i++)
        {
            MX = min(MX, max(A[i], A[i + 1]));
        }
        cout << MX - 1 << endl;
    }
    return 0;
}
