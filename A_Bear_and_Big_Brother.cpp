// https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, years;
    cin >> a >> b;
    int i = 1;
    while (1)
    {
        a = a * 3;
        b = b * 2;
        if (a > b)
        {
            years = i;
            break;
        }
        i++;
    }
    cout << years << endl;
    return 0;
}