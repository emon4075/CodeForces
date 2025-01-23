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
        ll N, A, B;
        cin >> N >> A >> B;
        if (A >= B)
        {
            cout << N * A * 1LL << endl;
        }
        else
        {
            ll Sum = 0;
            ll Diff = B - A;
            Sum = (B * (B + 1)) / 2;
            if (Diff >= N)
            {
                Sum -= (((B - N) * ((B - N) + 1)) / 2);
            }
            else
            {
                Sum -= ((A * (A + 1)) / 2);
                Sum += ((N - Diff) * A);
            }
            cout << Sum << endl;
        }
    }
    return 0;
}