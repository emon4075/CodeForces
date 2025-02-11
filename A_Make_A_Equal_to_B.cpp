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
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        bool Flag = true;
        for (int i = 0; i < N; i++)
        {
            if (A[i] != B[i])
            {
                Flag = false;
                break;
            }
        }
        if (Flag)
        {
            cout << 0 << endl;
            continue;
        }
        if (N == 1)
        {
            cout << 1 << endl;
            continue;
        }
        int Mismatch = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] != B[i])
                Mismatch++;
        }
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        int Diff = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] != B[i])
            {
                Diff++;
            }
        }
        int Candidate = (Diff == 0 ? 1 : Diff + 1);
        cout << min(Mismatch, Candidate) << endl;
    }
    return 0;
}
