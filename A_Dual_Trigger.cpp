#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
bool Check(string S)
{
    for (int i = 0; i < S.size() - 1; i++)
    {
        if (S[i] == '1' && S[i + 1] == '1')
        {
            return true;
        }
    }
    return false;
}
int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int Count = 0;
        for (char C : S)
        {
            if (C == '1')
            {
                Count++;
            }
        }
        if (Count == 2)
        {
            if (Check(S))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }

        else if (Count % 2 == 0)
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