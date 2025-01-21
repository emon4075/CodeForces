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
        int N, K, X;
        cin >> N >> K;
        multiset<int> S;
        for (int i = 0; i < N; i++)
        {
            cin >> X;
            S.insert(X);
        }
        int Score = 0;
        while (!S.empty())
        {
            auto A_It = S.begin();
            auto A = *A_It;
            S.erase(A_It);
            auto B = K - A;
            auto B_It = S.find(B);
            if (B_It != S.end())
            {
                Score++;
                S.erase(B_It);
            }
        }
        cout << Score << endl;
    }
    return 0;
}
