// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    int T = A + B + 1;
    char S[T];
    cin >> S;
    if (S[A] == '-')
    {
        int count = 0;
        for (int i = 0; i < T; i++)
        {
            if (S[i] >= '0' && S[i] <= '9')
            {
                count++;
            }
        }
        if (count == T - 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}