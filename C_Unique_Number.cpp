#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        vector<int> V;
        int Flag = 9;
        int X;
        cin >> X;
        if (X < 10)
        {
            cout << X;
        }
        else if (X > 45)
        {
            cout << -1 << endl;
        }
        else
        {
            while (true)
            {
                V.push_back(Flag);
                X -= Flag;
                Flag--;
                if (X <= Flag)
                {
                    V.push_back(X);
                    break;
                }
            }
            sort(V.begin(), V.end());
        }
        for (int I : V)
        {
            cout << I;
        }
        cout << endl;
    }

    return 0;
}