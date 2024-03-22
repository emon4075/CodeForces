#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, count = 0;
    cin >> N;
    while (N--)
    {
        int P, Q;
        cin >> P >> Q;
        if ((Q - P) >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}