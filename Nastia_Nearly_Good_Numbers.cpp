#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while (T--) {
    long long A,B;
    cin>>A>>B;
    if (B==1) {
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      cout<<A*B<<" "<<A<<" "<<((A*B)+A)<<endl;
    }
  }
  return 0;
}
