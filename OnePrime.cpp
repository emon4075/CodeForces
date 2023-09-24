// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long X;
    int count = 0;
    cin >> X;
    for (int i = 2; i <= sqrt(X); i++)
    {
        if (X % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
