#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define PB push_back
#define All(V) V.begin(), V.end()
#define F first
#define S second
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

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
    ll N, B, D;
    cin >> N >> B >> D;
    vector<ll> V(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> V[i];
    }
    ll Waste = 0;
    int Count = 0;
    for (ll i = 0; i < N; i++)
    {
        if (V[i] <= B)
        {
            Waste += V[i];
        }
        if (Waste > D)
        {
            Count++;
            Waste = 0;
        }
    }
    cout << Count << endl;

    return 0;
}