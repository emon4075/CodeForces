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
        ll N, X, Y;
        cin >> N >> X >> Y;
        vector<int> V(N);
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        ll Count = 0;
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (((V[i] + V[j]) % X == 0) && (((V[i] - V[j]) % Y) == 0))
                {
                    Count++;
                }
            }
        }
        cout << Count << endl;
    }
    return 0;
}