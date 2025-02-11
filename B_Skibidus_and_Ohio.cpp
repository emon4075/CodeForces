#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define PB push_back
#define All(V) V.begin(), V.end()
#define F first
#define S second

const int MOD = 1e9 + 7;
const int INF = INT_MAX;

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
        bool Flag = false;
        for (int i = 0; i < S.size() - 1; i++)
        {
            if (S[i] == S[i + 1])
            {
                Flag = true;
            }
        }
        if (Flag)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << S.size() << endl;
        }
    }
    return 0;
}