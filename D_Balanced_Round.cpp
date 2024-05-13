#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while (T--) {
    int N,K;
    cin>>N>>K;
    vector<int>V(N);
    for (int i = 0; i < N; i++) {
      cin>>V[i];
    }
    sort(V.begin(),V.end());
    int Maxi=1;
    int Now=1;
    for (int i = 1; i < N; i++) {
      if ((abs(V[i]-V[i-1])<=K)) {
        Now++;
      }
      else {
        Maxi=max(Maxi,Now);
        Now=1;
      }
    }
    Maxi=max(Maxi,Now);
    cout<<N-Maxi<<endl;
  }
  return 0;
}
