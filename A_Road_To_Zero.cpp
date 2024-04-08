#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while (T--) {
    long long X,Y,A,B;
    cin>>X>>Y;
    cin>>A>>B;
    if ((A+A)>B) {
      long long B_Lagbo = min(X,Y);
      long long A_Lagbo = max(X,Y)-B_Lagbo;
      cout<<(B_Lagbo*B)+(A_Lagbo*A)<<endl;
    }
    else{
      cout<<(X+Y)*A<<endl;
    }
  }
  return 0;
}
