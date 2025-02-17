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
    int N, X;
    cin >> N;
    int Diff = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        cin >> X;
        X = abs(X);
        Diff = min(Diff, X - 0);
    }
    cout << Diff << endl;
    return 0;
}