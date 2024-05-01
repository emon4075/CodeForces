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
        if (N % 7 == 0)
        {
            cout << N << endl;
        }
        else
        {
            N = (N / 10) * 10;

            for (int i = N;; i++)
            {
                if (i % 7 == 0)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}