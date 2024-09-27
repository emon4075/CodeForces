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
        int gold = 0, giveCount = 0;
        for (int i = 0; i < N; i++)
        {
            int X;
            cin >> X;
            if (X == 0)
            {
                if (gold > 0)
                {
                    giveCount++;
                    gold--;
                }
            }
            else if (X >= K)
            {
                gold += X;
            }
        }
        cout << giveCount << endl;
    }
    return 0;
}
