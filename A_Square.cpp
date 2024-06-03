#include <bits/stdc++.h>
using namespace std;

double DIS(pair<int, int> P1, pair<int, int> P2)
{
    int First = (P2.first - P1.first) * (P2.first - P1.first);
    int Second = (P2.second - P1.second) * (P2.second - P1.second);
    double Res = sqrt(First + Second);
    return Res;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        vector<pair<int, int>> V(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> A >> B;
            V[i] = {A, B};
        }
        double First = 0, Second = 0;
        for (int i = 1; i < 4; i++)
        {
            if (V[0].first == V[i].first)
            {
                First = DIS(V[0], V[i]);
            }
            else if (V[0].second == V[i].second)
            {
                Second = DIS(V[0], V[i]);
            }
        }
        int Res = First * Second;
        cout << Res << endl;
    }

    return 0;
}