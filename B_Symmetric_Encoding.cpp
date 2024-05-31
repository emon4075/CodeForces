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
        string S, r = "";
        cin >> S;
        vector<char> V(S.begin(), S.end());
        sort(V.begin(), V.end());
        V.erase(unique(V.begin(), V.end()), V.end());
        for (auto C : S)
        {
            auto it = find(V.begin(), V.end(), C);
            int Position = it - V.begin();
            r += V[V.size() - 1 - Position];
        }
        cout << r << endl;
    }
    return 0;
}
