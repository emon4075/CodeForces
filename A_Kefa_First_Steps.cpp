#include<bits/stdc++.h>
using namespace std;
int main() {
  int N, X;
  cin >> N;
  stack<int> ST;
  cin >> X;
  ST.push(X);
  int Sequence = 1,Maxi=1;
  for (int i = 1; i < N; ++i) {
    cin >> X;
    if (X >= ST.top()) {
      Sequence++;
    } else {
      Sequence = 1;
    }
    ST.push(X);
    Maxi=max(Maxi,Sequence);
  }
  cout << Maxi << endl;
  return 0;
}
