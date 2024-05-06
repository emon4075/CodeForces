#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll A, B, Sum = 0, Extra;
    cin >> A >> B;
    Sum = A;
    while (A >= B)
    {
        Sum += (A / B);
        Extra = A % B;
        A = (A / B) + Extra;
    }
    cout << Sum << endl;
    return 0;
}