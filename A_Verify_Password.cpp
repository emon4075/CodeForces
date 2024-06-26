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
        string S;
        cin >> S;
        bool OK = true;
        int IDX;
        for (int i = 0; i < N - 1; i++)
        {
            if (isdigit(S[i]) && isalpha(S[i + 1]))
            {
                IDX = i;
            }
            else if (isalpha(S[i]) && isdigit(S[i + 1]))
            {
                OK = false;
                break;
            }
        }
        if (OK)
        {
            for (int i = 0; i <= IDX; i++)
            {
                if (S[i] > S[i + 1])
                {
                    OK = false;
                }
            }
            for (int i = IDX + 1; i < N; i++)
            {
                if (S[i] > S[i + 1])
                {
                    OK = false;
                }
            }
            if (OK)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}