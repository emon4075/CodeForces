#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    if (N <= M)
    {
        if (N % 2 == 0)
        {
            cout << "Malvika" << endl;
        }
        else
        {
            cout << "Akshat" << endl;
        }
    }
    else
    {
        if (M % 2 == 0)
        {
            cout << "Malvika" << endl;
        }
        else
        {
            cout << "Akshat" << endl;
        }
    }
    return 0;
}