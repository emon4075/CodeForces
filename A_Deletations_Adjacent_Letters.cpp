#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while (T--) {
    string S;
    char C;
    cin>>S;
    cin>>C;
    vector<int> V;
    for (int i = 0; i < S.size(); i++) {
      if (S[i]==C) {
        V.push_back(i+1);
      }
    }
    bool Flag= false;

    for(auto it: V){
      if (it%2==1) {
        Flag= true;
      }
    }

    if (Flag) {
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
