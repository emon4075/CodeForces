#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if (N >= 0)
    {
        cout << N << endl;
    }
    else
    {
        int N1 = N % 10;
        int T1 = N / 10;
        int T2 = ((N / 100) * 10) + N1;
        if (T1 > T2)
        {
            cout << T1 << endl;
        }
        else
        {
            cout << T2 << endl;
        }
    }
    return 0;
}