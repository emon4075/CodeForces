// https://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink_toast = (k * l) / nl;
    int lime_toast = (c * d);
    int salt_toast = p / np;
    int Mini = min(drink_toast, lime_toast);
    Mini = min(Mini, salt_toast);
    cout << Mini / n << endl;
    return 0;
}