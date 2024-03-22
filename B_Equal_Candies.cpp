#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        long long int Sum = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            Sum += A[i];
        }
        int Mini = *min_element(A, A + N);
        cout << Sum - (Mini * N) << endl;
    }

    return 0;
}