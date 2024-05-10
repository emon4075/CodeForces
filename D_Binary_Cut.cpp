#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        int Counter = 1;
        for (int i = 0; i < S.length() - 1; i++)
        {
            if (S[i] <= S[i + 1])
            {
                continue;
            }
            else
            {
                Counter++;
            }
        }
        cout << Counter << endl;
    }
    return 0;
}