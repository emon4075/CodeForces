#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        bool Flag = false;
        char S[105];
        cin >> S;
        for (int i = 0; i < strlen(S) - 1; i++)
        {
            if (S[i] == 'i' && S[i + 1] == 't')
            {
                Flag = true;
            }
        }
        if (Flag)
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