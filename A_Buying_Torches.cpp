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
        ll X, Y, K;
        cin >> X >> Y >> K;
        ll total_sticks_needed = Y * K + K; 
        ll first_trades = (total_sticks_needed - 1 + (X - 2)) / (X - 1); 
        ll total_steps = first_trades + K; 
        cout << total_steps << endl;
    }
    return 0;
}
