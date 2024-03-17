// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int Y, M;
    Y = N / 365;
    N = N % 365;
    M = N / 30;
    N = N % 30;
    cout << Y << " years" << endl;
    cout << M << " months" << endl;
    cout << N << " days" << endl;
    return 0;
}
