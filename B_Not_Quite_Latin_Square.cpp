// https://codeforces.com/contest/1915/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int IDX1, IDX2;
        char A[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> A[i][j];
                if (A[i][j] == '?')
                {
                    IDX1 = i;
                    IDX2 = j;
                }
            }
        }
        string S = "ABC";
        for (int i = 0; i < 3; i++)
        {
            for (char C : S)
            {
                if (C == A[IDX1][i])
                {
                    S.erase(remove(S.begin(), S.end(), C), S.end());
                }
            }
        }
        cout << S << endl;
    }
    return 0;
}
