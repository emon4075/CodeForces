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
        list<int> L;
        for (int i = 0; i < N; i++)
        {
            int X;
            cin >> X;
            L.push_back(X);
        }
        if (is_sorted(L.begin(), L.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            bool bl = false;
            for (auto it = L.begin(); it != L.end(); ++it)
            {
                if (*it >= 10)
                {
                    int Temp = *it;
                    vector<int> Tempo;
                    while (Temp >= 1)
                    {
                        int R = Temp % 10;
                        Tempo.push_back(R);
                        Temp /= 10;
                    }
                    reverse(Tempo.begin(), Tempo.end());
                    auto Current = it;
                    it = L.erase(it);
                    it = L.insert(it, Tempo.begin(), Tempo.end());
                    if (is_sorted(L.begin(), L.end()))
                    {
                        bl = true;
                        break;
                    }
                }
            }
            if (bl)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
