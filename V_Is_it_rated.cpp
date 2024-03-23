#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Rated = 0, Flag = 0;
    cin >> N;
    int A[N], B[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
        if (A[i] != B[i])
        {
            Rated++;
        }
    }
    if (Rated > 0)
    {
        cout << "rated" << endl;
        return 0;
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (A[i] < A[j])
            {
                Flag++;
            }
        }
    }
    if (Flag > 0)
    {
        cout << "unrated" << endl;
    }
    else
    {
        cout << "maybe" << endl;
    }
    return 0;
}
