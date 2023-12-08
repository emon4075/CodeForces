// https://codeforces.com/problemset/problem/1409/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        int Max = max(A, B);
        int Min = min(A, B);
        int Moves = (ceil)((Max - Min) / 10.0);
        cout << Moves << endl;
    }
    return 0;
}