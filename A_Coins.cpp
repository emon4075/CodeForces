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
        ll N, K;
        cin >> N >> K;
        if (N % 2 == 0)
        {
            YES;
        }
        else
        {
            if (K % 2 == 1)
            {
                YES;
            }
            else
            {
                NO;
            }
        }
    }
    return 0;
}