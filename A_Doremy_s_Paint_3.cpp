#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define PB push_back
#define All(V) V.begin(), V.end()
#define F first
#define S second
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

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
        int X;
        map<int, int> M;
        for (int i = 0; i < N; i++)
        {
            cin >> X;
            if (M.find(X) != M.end())
            {
                M[X]++;
            }
            else
            {
                M.insert({X, 1});
            }
        }
        if (M.size() == 1)
        {
            YES;
        }
        else if (M.size() <= 2)
        {
            int A[2];
            int K = 0;
            for (auto i : M)
            {
                A[K] = i.S;
                K++;
            }
            int Diff = abs(A[0] - A[1]);
            if (Diff <= 1)
            {
                YES;
            }
            else
            {
                NO;
            }
        }
        else
        {
            NO;
        }
    }
    return 0;
}