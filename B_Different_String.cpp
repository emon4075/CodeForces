#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        bool bl = false;
        string S;
        cin >> S;
        for (int i = 0; i < S.length(); i++)
        {
            if (S[0] != S[i])
            {
                bl = true;
                swap(S[0], S[i]);
                break;
            }
        }
        if (bl)
        {
            cout << "YES" << endl;
            cout << S << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}