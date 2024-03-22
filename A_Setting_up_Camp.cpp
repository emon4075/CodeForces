#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c, Tents_Needed = 0, d;
        cin >> a >> b >> c;
        Tents_Needed += a;
        if (b % 3 == 0)
        {
            Tents_Needed += (b / 3);
        }
        else
        {
            d = 3 - (b % 3);
            Tents_Needed += ((b + d) / 3);
            if (d > c)
            {
                cout << -1 << endl;
                continue;
            }
            c -= d;
        }
        Tents_Needed += ceil(c / 3.0);
        cout << Tents_Needed << endl;
    }
    return 0;
}