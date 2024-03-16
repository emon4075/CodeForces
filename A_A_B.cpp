// https://codeforces.com/problemset/problem/1772/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    char S[4];
    while (T--)
    {
        cin >> S;
        cout << (S[0] + S[2]) - (48 * 2) << endl;
    }
    return 0;
}
