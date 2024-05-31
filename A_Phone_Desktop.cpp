#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        int Cells = 15;
        int NeedBig = 4;
        int Big = 2;
        int S2 = (Y + Big - 1) / Big;
        int Used = Y * NeedBig;
        int UCY = S2 * Cells - Used;
        int Rem = X - UCY;
        int S1;
        if (Rem > 0)
        {
            S1 = (Rem + Cells - 1) / Cells;
        }
        else
        {
            S1 = 0;
        }
        cout << S1 + S2 << endl;
    }

    return 0;
}