// https://codeforces.com/problemset/problem/200/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];
    int Sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        Sum += A[i];
    }
    cout << fixed << setprecision(12) << Sum / (double)N << endl;
    return 0;
}