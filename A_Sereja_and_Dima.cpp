// https://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Sereja = 0, Dema = 0;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int mx, i = 0, j = N - 1, k = 1;
    while (i <= j)
    {
        mx = max(A[i], A[j]);
        if (mx == A[j])
        {
            j--;
            if (k % 2 != 0)
            {
                Sereja += mx;
            }
            else
            {
                Dema += mx;
            }
        }
        else
        {
            i++;
            if (k % 2 != 0)
            {
                Sereja += mx;
            }
            else
            {
                Dema += mx;
            }
        }
        k++;
    }
    cout << Sereja << " " << Dema << endl;
    return 0;
}