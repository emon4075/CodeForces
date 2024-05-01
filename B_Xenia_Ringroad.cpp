#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ll N, M;
  cin >> N >> M;
  vector<ll> V;
  while (M--) {
    ll X; 
    cin >> X;
    V.push_back(X);
  }
  ll Times_Needed = 0;
  Times_Needed += V[0] - 1;
  for (size_t i = 1; i < V.size(); i++) {
    if (V[i - 1] <= V[i]) {
      Times_Needed += V[i] - V[i - 1];
    } else {
      Times_Needed += N - V[i - 1] + V[i];
    }
  }
  cout << Times_Needed << endl;
  return 0;
}
