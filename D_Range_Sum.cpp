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
    ll T;
    cin >> T;
    while (T--)
    {
        ll L, R;
        cin >> L >> R;
        ll Max = max(L, R);
        ll Min = min(L, R);
        Min--;
        ll Result_1 = ((Max * (Max + 1)) / 2 * 1LL);
        ll Result_2 = ((Min * (Min + 1)) / 2 * 1LL);
        cout << Result_1 - Result_2 << endl;
    }
    return 0;
}