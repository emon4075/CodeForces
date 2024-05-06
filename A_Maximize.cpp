#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Track, Max = 0;
        cin >> X;
        for (int i = 1; i < X; i++)
        {
            int Value = __gcd(X, i) + i;
            if (Value > Max)
            {
                Max = Value;
                Track = i;
            }
        }
        cout << Track << endl;
    }
    return 0;
}
