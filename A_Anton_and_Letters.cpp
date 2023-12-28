// https://codeforces.com/problemset/problem/443/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char S[1001];
    int C[26] = {0};
    gets(S);
    for (int i = 0; S[i] != '\0'; i++)
    {
        int Value = S[i] - 'a';
        if (S[i] >= 'a' && S[i] <= 'z')
        {
            C[Value]++;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (C[i] > 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}