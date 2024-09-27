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
        int N;
        cin >> N;
        int X, Y;
        cin >> X >> Y;
        int Ans = ceil((N * 1.0) / (min(X, Y)));
        cout << Ans << endl;
    }
    return 0;
}