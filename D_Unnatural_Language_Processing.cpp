#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int N, Term;
        cin >> N;
        string S;
        cin >> S;
        string New = "";
        while (!S.empty())
        {
            if (S.back() == 'a' || S.back() == 'e')
            {
                Term = 2;
            }
            else
            {
                Term = 3;
            }
            while (Term--)
            {
                New += S.back();
                S.pop_back();
            }
            New += '.';
        }
        New.pop_back();
        reverse(New.begin(), New.end());
        cout << New << endl;
    }
    return 0;
}