#include <bits/stdc++.h>
#define endl '\n'
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
        int N, K;
        cin >> N >> K;
        cout << (N * K) - (K - 1) << endl;
    }
    return 0;
}