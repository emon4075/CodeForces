#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
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
        int N, P;
        cin >> N >> P;
        vector<int> A(N), B(N);
        vector<pair<int, int>> VP;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        VP.push_back({P, N + 1});
        for (int i = 0; i < N; i++)
        {
            VP.push_back({B[i], A[i]});
        }
        sort(VP.begin(), VP.end());
        ll Total = 1;
        ll Cost = P;
        int IDX = 0;
        while (Total < N)
        {
            ll Left = N - Total;
            if (VP[IDX].second <= Left)
            {
                Total += VP[IDX].second;
                Cost += VP[IDX].first * VP[IDX].second * 1LL;
            }
            else
            {
                Total = N;
                Cost += Left * 1LL * VP[IDX].first;
            }
            IDX++;
        }
        cout << Cost << endl;
    }
    return 0;
}