// https://codeforces.com/problemset/problem/118/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char S[101], Cpy[101];
    cin >> S;
    for (i = 0; i < strlen(S); i++)
    {
        Cpy[i] = tolower(S[i]);
    }
    Cpy[i] = '\0';
    for (int i = 0; Cpy[i] != '\0'; i++)
    {
        if (Cpy[i] == 'a' || Cpy[i] == 'e' || Cpy[i] == 'i' || Cpy[i] == 'o' || Cpy[i] == 'u' || Cpy[i] == 'y')
        {
            continue;
        }
        else
        {
            cout << "." << Cpy[i];
        }
    }

    return 0;
}