#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        if (A == B)
        {
            cout << 0 << endl;
        }
        else if (A > B)
        {
            if ((A % 2 == 1 && B % 2 == 1) || (A % 2 == 0 && B % 2 == 0))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            if ((A % 2 == 1 && B % 2 == 1) || (A % 2 == 0 && B % 2 == 0))
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }

    return 0;
}