#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    char A[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i % 2 == 0)
            {
                cout << '#';
            }
            else if (i % 4 == 3 && j == 0)
            {
                cout << '#';
            }
            else if (i % 2 == 1 && !(i % 4 == 3) && j == M - 1)
            {
                cout << '#';
            }
            else
            {
                cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}