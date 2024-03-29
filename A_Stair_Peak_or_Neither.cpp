#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if (A < B && B < C)
        {
            cout << "STAIR" << endl;
        }
        else if (A < B && B > C)
        {
            cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }

    return 0;
}