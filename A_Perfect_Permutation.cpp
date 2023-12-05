// https://codeforces.com/problemset/problem/233/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];
    if (N % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            A[i] = i + 1;
        }
        for (int i = 0; i < N; i += 2)
        {
            swap(A[i], A[i + 1]);
        }
        for (int i = 0; i < N; i++)
        {
            cout << A[i] << " ";
        }
    }
    return 0;
}