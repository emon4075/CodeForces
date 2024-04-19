#include<bits/stdc++.h>
using namespace std;
int main(){
  string S="qwertyuiopasdfghjkl;zxcvbnm,./";
  char Decider;
  cin>>Decider;
  if (Decider=='R') {
    char C;
    while (cin>>C) {
      cout << S[S.find(C) - 1];
    }
    cout<<endl;
  }
  else{
    char C;
    while (cin>>C) {
      cout << S[S.find(C) + 1];
    }
    cout<<endl;
  }
  return 0;
}
