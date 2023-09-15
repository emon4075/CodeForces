// https://codeforces.com/problemset/problem/4/A
#include <iostream>
using namespace std;
int main()
{
    int W;
    cin >> W;
    if (W % 2 != 0 || W <= 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}