// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G
// n number of natural numbers sum=(n*(n+1))/2
#include <iostream>
using namespace std;
int main()
{
    long long N, X;
    cin >> N;
    X = (N * (N + 1)) / 2;
    cout << X << endl;
    return 0;
}