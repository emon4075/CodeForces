// https://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int Part_1, Part_2, Result;
    Part_1 = ceil(n * 1.0 / a);
    Part_2 = ceil(m * 1.0 / a);
    Result = Part_1 * Part_2;
    cout << Result << endl;
    return 0;
}