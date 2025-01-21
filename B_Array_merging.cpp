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
        cin >> N;
        map<int, int> V;
        for (int i = 0; i < N; i++)
        {
            int X;
            cin >> X;
            if (V.find(X) != V.end())
            {
                V[X]++;
            }
            else
            {
                V.insert({X, 1});
            }
        }
        for (int i = 0; i < N; i++)
        {
            int X;
            cin >> X;
            if (V.find(X) != V.end())
            {
                V[X]++;
            }
            else
            {
                V.insert({X, 1});
            }
        }
        auto MX = *max_element(All(V));
        cout << MX.S << endl;
    }
    return 0;
}