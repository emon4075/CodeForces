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
        int N, M;
        cin >> N >> M;
        vector<int> A(N);
        vector<int> B(M);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < M; i++)
        {
            cin >> B[i];
        }
        int X = B[0];
        bool isPossible = true;
        ll Last = INT_MIN;
        for (int i = 0; i < N; i++)
        {
            int Original = A[i];
            int Changed = X - A[i];
            int High = max(Original, Changed);
            int Low = min(Original, Changed);
            if (Low >= Last)
            {
                Last = Low;
            }
            else if (High >= Last)
            {
                Last = High;
            }
            else
            {
                isPossible = false;
                break;
            }
        }
        if (isPossible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
