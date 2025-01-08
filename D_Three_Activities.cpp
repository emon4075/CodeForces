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
        vector<pair<int, int>> A(N), B(N), C(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i].F;
            A[i].S = i;
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i].F;
            B[i].S = i;
        }
        for (int i = 0; i < N; i++)
        {
            cin >> C[i].F;
            C[i].S = i;
        }

        sort(A.begin(), A.end(), greater<>());
        sort(B.begin(), B.end(), greater<>());
        sort(C.begin(), C.end(), greater<>());

        ll Max = LONG_MIN;
        for (int i = 0; i < min(3, N); i++)
        {
            for (int j = 0; j < min(3, N); j++)
            {
                for (int k = 0; k < min(3, N); k++)
                {
                    if (A[i].S != B[j].S && B[j].S != C[k].S && A[i].S != C[k].S)
                    {
                        Max = max(Max, (ll)A[i].F + (ll)B[j].F + (ll)C[k].F);
                    }
                }
            }
        }

        cout << Max << endl;
    }

    return 0;
}
