// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
#include <iostream>
using namespace std;
int main()
{
    long long A, B;
    char S;
    cin >> A >> S >> B;
    if (S == '+')
    {
        cout << A + B << endl;
    }
    else if (S == '-')
    {
        cout << A - B << endl;
    }
    else if (S == '*')
    {
        cout << A * B << endl;
    }
    else if (S == '/')
    {
        cout << A / B << endl;
    }
    return 0;
}