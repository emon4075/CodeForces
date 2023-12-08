// https://codeforces.com/problemset/problem/758/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    if (N == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        int Max = *max_element(A, A + N);
        long long int Sum = 0;
        for (int i = 0; i < N; i++)
        {
            Sum += (Max - A[i]);
        }
        cout << Sum << endl;
    }
    return 0;
}