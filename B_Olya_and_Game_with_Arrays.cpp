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
        ll MINI = INT_MAX;
        ll MINI_2 = INT_MAX;
        ll Sum = 0;
        for (int i = 0; i < N; i++)
        {
            int M;
            cin >> M;
            vector<int> V(M);
            for (int i = 0; i < M; i++)
            {
                cin >> V[i];
            }
            sort(All(V));
            MINI = min(MINI, (ll)V[0]);
            MINI_2 = min(MINI_2, (ll)V[1]);
            Sum += (ll)V[1];
        }
        cout << MINI + Sum - MINI_2 << endl;
    }
    return 0;
}