// https://codeforces.com/problemset/problem/486/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int N, N_Odd, N_Even, Sum_1, Sum_2;
    cin >> N;
    N_Odd = ceil(N / 2.0);
    N_Even = N - N_Odd;
    Sum_1 = N_Odd * N_Odd;
    Sum_2 = N_Even * (N_Even + 1);
    Sum_1 = Sum_1 * -1;
    cout << Sum_1 + Sum_2 << endl;
    return 0;
}