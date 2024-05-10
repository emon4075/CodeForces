#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        int Max = max(A, B);
        int Min = min(A, B);
        bool b1 = false, b2 = false;
        if ((C >= Max && C <= 12) || C <= Min)
        {
            b1 = true;
        }
        if ((D >= Max && D <= 12) || D <= Min)
        {
            b2 = true;
        }
        if (b1 == b2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}