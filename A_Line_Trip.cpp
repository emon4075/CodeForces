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
        int N, X, Y;
        cin >> N >> X;
        vector<int> V;
        V.push_back(0);
        for (int i = 0; i < N; i++)
        {
            cin >> Y;
            V.push_back(Y);
        }
        V.push_back(V.back() + (2 * abs(V.back() - X)));
        int MAX = INT_MIN;
        for (int i = 0; i < V.size() - 1; i++)
        {
            int Diff = abs(V[i] - V[i + 1]);
            MAX = max(MAX, Diff);
        }
        cout << MAX << endl;
    }
    return 0;
}