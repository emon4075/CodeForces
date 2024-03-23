#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        vector<char> V;
        char A[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (A[i][j] != '.')
                {
                    V.push_back(A[i][j]);
                }
            }
        }
        for (auto it = V.begin(); it != V.end(); it++)
        {
            cout << *it;
        }
        cout << endl;
    }

    return 0;
}