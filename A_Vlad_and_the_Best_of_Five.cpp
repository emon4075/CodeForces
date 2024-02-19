#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A = 0, B = 0;
        string S;
        cin >> S;
        for (char C : S)
        {
            if (C == 'A')
            {
                A++;
            }
            else
            {
                B++;
            }
        }
        if (max(A, B) == A)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }

    return 0;
}