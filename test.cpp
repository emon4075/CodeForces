#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    FASTIO();
    string S;
    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        char C = S[i];
        if (C >= '5' && C <= '9')
        {
            S[i] = '9' - C + '0';
        }
    }
    cout << S << endl;
    return 0;
}
