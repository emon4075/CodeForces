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
        int N, X;
        cin >> N >> X;
        vector<int> V(N);
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        int Count = 0;
        int MN = INT_MAX, MX = INT_MIN;
        for (int i = 0; i < N; i++)
        {
            MN = min(MN, V[i]);
            MX = max(MX, V[i]);
            if (MX - X > MN + X)
            {
                Count++;
                MX = V[i];
                MN = V[i];
            }
        }
        cout << Count << endl;
    }
    return 0;
}