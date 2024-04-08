#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, N;
        cin >> N >> A >> B;
        int Signly, Doubly;
        Signly = N * A;
        Doubly = ((N / 2) * B) + ((N % 2) * A);
        if (Signly >= Doubly)
        {
            cout << Doubly << endl;
        }
        else
        {
            cout << Signly << endl;
        }
    }
    return 0;
}