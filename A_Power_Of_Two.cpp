// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int N;
    cin >> N;
    while (N % 2 == 0)
    {
        N = N / 2;
    }
    if (N == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}