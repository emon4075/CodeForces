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
        cout << min(X, Y) << " " << max(X, Y) << endl;
    }

    return 0;
}