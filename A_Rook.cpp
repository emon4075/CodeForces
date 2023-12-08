// https://codeforces.com/problemset/problem/1907/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char S[3];
        cin >> S;
        char Horizontal[9] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '\0'};
        int Vertical[8] = {1, 2, 3, 4, 5, 6, 7, 8};
        for (int i = 0; i < 8; i++)
        {
            if (Horizontal[i] == S[0])
            {
                continue;
            }
            else
            {
                cout << Horizontal[i] << S[1] << " ";
            }
        }
        for (int i = 0; i < 8; i++)
        {
            if (Vertical[i] == S[1] - '0')
            {
                continue;
            }
            else
            {
                cout << S[0] << Vertical[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}