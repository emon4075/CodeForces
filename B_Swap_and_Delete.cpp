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
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        int One = 0, Zero = 0;
        for (auto c : S)
        {
            if (c == '0')
            {
                Zero++;
            }
            else
            {
                One++;
            }
        }
        int T = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == '1')
            {
                if (Zero != 0)
                {
                    Zero--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (One != 0)
                {
                    One--;
                }
                else
                {
                    break;
                }
            }
        }
        cout << One + Zero << endl;
    }
    return 0;
}