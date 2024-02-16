// https://codeforces.com/problemset/problem/136/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, P;
    cin >> N;
    vector<int> F(N);
    for (int i = 1; i <= N; i++)
    {
        cin >> P;
        F[P] = i;
    }
    for (int i = 1; i <= N; i++)
    {
        cout << F[i] << " ";
    }
    return 0;
}