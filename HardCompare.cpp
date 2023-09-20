// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    double r1 = B * log(A);
    double r2 = D * log(C);
    if (r1 > r2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}