#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int IDX = -1;

void least_Difference(vector<int> &A)
{
    int mini = INT_MAX;
    for (int i = 1; i < A.size(); i++)
    {
        int diff = A[i] - A[i - 1];
        mini = min(mini, diff);
        if (mini == diff)
        {
            IDX = i;
        }
    }
}

int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        if (!is_sorted(A.begin(), A.end()))
        {
            cout << 0 << endl;
        }
        else
        {
            least_Difference(A);
            int X = A[IDX - 1];
            int Y = A[IDX];
            int Count = ((Y - X) / 2) + 1;
            cout << Count << endl;
        }
    }
    return 0;
}
