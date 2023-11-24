#include <bits/stdc++.h>
using namespace std;
int main()
{
    char A[101], B[101], C[101];
    cin >> A;
    cin >> B;
    cin >> C;
    int count[26] = {0};
    int anti_count[26] = {0};
    for (int i = 0; i < strlen(A); i++)
    {
        int Value = A[i] - 'A';
        count[Value]++;
    }
    for (int i = 0; i < strlen(B); i++)
    {
        int Value = B[i] - 'A';
        count[Value]++;
    }
    for (int i = 0; i < strlen(C); i++)
    {
        int Value = C[i] - 'A';
        anti_count[Value]++;
    }
    int flag = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != anti_count[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}