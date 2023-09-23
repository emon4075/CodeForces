// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F
#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    for (int i = 1; i <= 12; i++)
    {
        cout << N << " * " << i << " = " << N * i << endl;
    }

    return 0;
}