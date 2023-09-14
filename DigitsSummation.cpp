// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
#include <iostream>
using namespace std;
int main()
{
    long long N, M, sum, rem1, rem2;
    cin >> N >> M;
    rem1 = N % 10;
    rem2 = M % 10;
    sum = rem1 + rem2;
    cout << sum << endl;
    return 0;
}