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
        int A, B, D, E, Result[3];
        cin >> A >> B >> D >> E;
        Result[0] = A + B;
        Result[1] = D - B;
        Result[2] = E - D;
        sort(Result, Result + 3);
        if (Result[0] == Result[2])
            cout << 3 << endl;
        else if (Result[0] == Result[1] || Result[1] == Result[2] || Result[0] == Result[2])
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}