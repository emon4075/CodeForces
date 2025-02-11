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
    int A[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    sort(A, A + 3);
    cout << A[2] - A[0] << endl;
    return 0;
}