#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin>>N;
  string S;
  cin>>S;
  int counter=0;
  for (int i = 1; i < N-1 ; i++) {
    if (S[i]=='x' && S[i-1]=='x' && S[i+1] == 'x') {
      counter++;
    }
  }
  cout<<counter<<endl;
  return 0;
}
