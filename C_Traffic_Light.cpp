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
        int N;
        char C;
        string S;
        cin >> N >> C;
        cin >> S;
        S += S;
        int Ans = INT_MIN;
        int Last = -1;
        for (int i = S.length() - 1; i >= 0; i--)
        {
            if (S[i] == 'g')
            {
                Last = i;
            }
            if (S[i] == C)
            {
                Ans = max(Ans, Last - i);
            }
        }
        cout << Ans << endl;
    }
    return 0;
}