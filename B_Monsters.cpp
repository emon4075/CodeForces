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

bool compare(pair<int, int> A, pair<int, int> B)
{
    if (A.first != B.first)
    {
        return A.first > B.first;
    }
    return A.second < B.second;
}

int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<pair<int, int>> P(N);
        for (int i = 0; i < N; i++)
        {
            int X;
            cin >> X;
            X = X % K;
            if (X == 0)
            {
                X = K;
            }
            P[i] = {X, i + 1};
        }
        sort(P.begin(), P.end(), compare);
        for (auto I : P)
        {
            cout << I.second << " ";
        }
        cout << endl;
    }
    return 0;
}
