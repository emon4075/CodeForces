#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S, P = "codeforces";
        cin >> S;
        int count = 0;
        for (int i = 0; i < P.length(); i++)
        {
            if (S[i] != P[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}