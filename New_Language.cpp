#include<iostream>
using namespace std;
int main() {
  int T;
  cin >> T;
  while (T--) {
    int a,b,n;
    cin>>a>>b>>n;
    int count=0;
    while (1) {
      if (min(a,b)==b) {
        b+=a;
      }
      else{
        a+=b;
      }
      count++;
      if (a>n || b>n) {
        break;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}

