#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        string S;
        cin >> S;
        int A[7];
        memset(A, 0, sizeof(A));
        for (auto ST : S)
        {
            A[ST - 'A']++;
        }
        int Count = 0;
        for (int i = 0; i < 7; i++)
        {
            if (M - A[i] > 0)
            {
                Count += (M - A[i]);
            }
        }
        cout << Count << endl;
    }
    return 0;
}
