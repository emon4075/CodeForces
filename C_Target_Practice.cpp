#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int A[10][10] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 2, 2, 2, 2, 2, 2, 2, 2, 1,
    1, 2, 3, 3, 3, 3, 3, 3, 2, 1,
    1, 2, 3, 4, 4, 4, 4, 3, 2, 1,
    1, 2, 3, 4, 5, 5, 4, 3, 2, 1,
    1, 2, 3, 4, 5, 5, 4, 3, 2, 1,
    1, 2, 3, 4, 4, 4, 4, 3, 2, 1,
    1, 2, 3, 3, 3, 3, 3, 3, 2, 1,
    1, 2, 2, 2, 2, 2, 2, 2, 2, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int Sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                char C;
                cin >> C;
                if (C == 'X')
                {
                    Sum += A[i][j];
                }
            }
        }
        cout << Sum << endl;
    }
    return 0;
}