#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S1, S2;
        cin >> S1 >> S2;
        swap(S1[0], S2[0]);
        cout << S1 << " " << S2 << endl;
    }
    return 0;
}