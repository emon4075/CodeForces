// https://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        bool greater_than_all = true;
        bool less_than_all = true;
        for (int j = 0; j < i; j++) {
            if (A[i] <= A[j]) {
                greater_than_all = false;
            }
            if (A[i] >= A[j]) {
                less_than_all = false;
            }
        }
        if (greater_than_all || less_than_all) {
            count++;
        }
    }
    cout << count-1 << endl;
    return 0;
}
