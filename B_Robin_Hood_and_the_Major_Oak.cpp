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
        ll N, K;
        cin >> N >> K;
        ll first_Year = N - K + 1;
        if (first_Year <= 0)
        {
            first_Year = 1;
        }
        ll total_Leaves = (N - first_Year + 1) * (N + first_Year) / 2;
        if (total_Leaves % 2 == 0)
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