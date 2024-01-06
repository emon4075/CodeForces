// https://codeforces.com/problemset/problem/1283/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int h, m;
        cin >> h >> m;
        cout << (23 - h) * 60 + (60 - m) << endl;
    }
    return 0;
}