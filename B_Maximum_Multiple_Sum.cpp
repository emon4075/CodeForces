#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int N1 = N / 2;
        int N2 = N / 3;
        double Value_1 = N1 * (N1 + 1);
        double Value_2 = (N2 * 3 * (N2 + 1) / 2.0);
        if (Value_1 > Value_2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}