#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    stack<int> ST;
    char C;
    while (cin >> C)
    {
        if (ST.empty() || C == ST.top())
        {
            ST.push(C);
        }
        else
        {
            ST.pop();
        }
    }
    cout << ST.size() << endl;

    return 0;
}