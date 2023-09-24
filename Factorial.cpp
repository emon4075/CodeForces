// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include <iostream>
using namespace std;
int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        long long fact = 1;
        cin >> N;
        for (int i = 1; i <= N; i++)
        {
            fact *= i;
        }
        cout << fact << endl;
    }

    return 0;
}