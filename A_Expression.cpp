// https://codeforces.com/problemset/problem/479/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, R1, R2, R3, R4, R5, R6;
    cin >> a >> b >> c;
    R1 = a + (b * c);
    R2 = a * (b + c);
    R3 = a * b * c;
    R4 = (a + b) * c;
    R5 = (a * b) + c;
    R6 = (a + b) + c;
    cout << max({R1, R2, R3, R4, R5, R6});
    return 0;
}