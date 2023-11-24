// https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char A[101], B[101];
    cin >> A >> B;
    for (int i = 0; i < strlen(A); i++)
    {
        A[i] = tolower(A[i]);
    }
    for (int i = 0; i < strlen(B); i++)
    {
        B[i] = tolower(B[i]);
    }
    cout << strcmp(A, B) << endl;
    return 0;
}