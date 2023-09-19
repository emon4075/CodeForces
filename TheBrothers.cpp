// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string F1, F2, S1, S2;
    cin >> F1 >> S1;
    cin >> F2 >> S2;
    if ((S1 == S2))
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }

    return 0;
}