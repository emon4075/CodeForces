#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A[3];
        cin >> A[0] >> A[1] >> A[2];

        if ((A[0] + A[1] + A[2]) == 0)
        {
            cout << 0 << endl;
        }
        else if ((A[0] + A[1] + A[2]) % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int Count = 0;
            while (1)
            {
                sort(A, A + 3);
                if (A[0] == 0 && A[1] == 0)
                {
                    break;
                }
                Count++;
                A[1]--;
                A[2]--;
            }
            cout << Count << endl;
        }
    }
    return 0;
}
