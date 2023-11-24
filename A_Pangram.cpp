// https://codeforces.com/problemset/problem/520/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char S[101];
    cin >> S;
    int flag = 0, count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        S[i] = tolower(S[i]);
        int Value = S[i] - 'a';
        count[Value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            flag++;
        }
    }
    if (flag == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}