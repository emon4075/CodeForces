#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int K;
        cin >> K;
        for (int i = 1;; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
            {
                continue;
            }
            if (--K == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}