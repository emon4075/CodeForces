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
        int N, R, B;
        cin >> N >> R >> B;
        int Space = B + 1;
        int R_Space = R / Space;
        int Extra_R = R % Space;
        for (int i = 0; i < Space; i++)
        {
            for (int j = 0; j < R_Space; j++)
            {
                cout << 'R';
            }
            if (Extra_R > 0)
            {
                cout << 'R';
                Extra_R--;
            }
            if (i < B)
            {
                cout << 'B';
            }
        }
        cout << endl;
    }
    return 0;
}
