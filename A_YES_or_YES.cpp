// https://codeforces.com/problemset/problem/1703/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char S1[] = "YES";
        char S2[4];
        cin >> S2;
        for (int i = 0; i < strlen(S2); i++)
        {
            S2[i] = toupper(S2[i]);
        }
        if (strcmp(S2, S1) == 0)
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