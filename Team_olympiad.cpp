// https://codeforces.com/problemset/problem/490/A
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  int one = 0, two = 0, three = 0;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
    if (A[i] == 1) {
      one++;
    } else if (A[i] == 2) {
      two++;
    } else if (A[i] == 3) {
      three++;
    }
  }
  if (one == 0 || two == 0 || three == 0) {
    cout << 0 << endl;
  } else {
    int mini = min({one, two, three});
    cout << mini << endl;
    vector<int> IdxOne, IdxTwo, IdxThree;
    for (int i = 0; i < n; i++) {
      if (A[i] == 1) {
        IdxOne.push_back(i + 1);
      } else if (A[i] == 2) {
        IdxTwo.push_back(i + 1);
      } else if (A[i] == 3) {
        IdxThree.push_back(i + 1);
      }
    }
    for (int i = 0; i < mini; i++) {
      cout << IdxOne[i] << " " << IdxTwo[i] << " " << IdxThree[i] << endl;
    }
  }
  return 0;
}

