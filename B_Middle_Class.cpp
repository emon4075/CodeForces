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
        ll N, K;
        cin >> N >> K;
        vector<ll> V(N);
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }

        ll Surplus = 0;
        for (int i = 0; i < N; i++)
        {
            if (V[i] > K)
            {
                ll Diff = V[i] - K;
                Surplus += Diff;
                V[i] = K;
            }
        }
        int wealthyCount = 0;
        vector<ll> Deficits;
        for (int i = 0; i < N; i++)
        {
            if (V[i] >= K)
            {
                wealthyCount++;
            }
            else
            {
                Deficits.push_back(K - V[i]);
            }
        }
        sort(Deficits.begin(), Deficits.end());
        for (ll need : Deficits)
        {
            if (need <= Surplus && Surplus > 0)
            {
                Surplus -= need;
                wealthyCount++;
            }
        }

        cout << wealthyCount << endl;
    }
    return 0;
}
