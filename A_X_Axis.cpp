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
        int MX = max({A, B, C});
        int MN = min({A, B, C});
        cout << MX - MN << endl;
    }
    return 0;
}