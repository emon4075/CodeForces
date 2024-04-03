#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (A[i][j] == 1)
            {
                cout << abs(3 - (i + 1)) + abs(3 - (j + 1)) << endl;
            }
        }
    }

    return 0;
}