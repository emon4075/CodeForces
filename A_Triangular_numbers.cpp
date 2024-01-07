// https://codeforces.com/problemset/problem/47/A
#include <bits/stdc++.h>
using namespace std;
bool Triangular(int N)
{
    bool IS_TRI = false;
    int i = 1, j = 2;
    while (1)
    {
        if (i == N)
        {
            return true;
            break;
        }
        if (i > N)
        {
            return false;
        }
        i = i + j;
        j++;
    }
}
int main()
{
    int N;
    cin >> N;
    if (Triangular(N))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}