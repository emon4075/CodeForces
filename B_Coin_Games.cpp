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
        vector<char> V(N);
        int Counter = 0;
        for (int i = 0; i < N; ++i)
        {
            cin >> V[i];
        }
        for (char C : V)
        {
            if (C == 'U')
            {
                Counter++;
            }
        }
        if (Counter % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
