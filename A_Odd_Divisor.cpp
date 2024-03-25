#include<bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin >> T;
  while (T--) {
    long long int N;
    cin >> N;
    if (N & (N-1)) {
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}

