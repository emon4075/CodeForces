#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int T;
  cin >> T;
  while (T--) {
    int N,count=0;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
      cin >> A[i];
    }
    int i=0;
    for (int i = 0; i < N - 1; i++) {
      if (A[i] > A[i + 1]) {
        count = max(count, A[i]);
      }
    }
    cout << count << endl;
  }
  return 0;
}

