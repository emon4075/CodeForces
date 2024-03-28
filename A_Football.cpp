#include<bits/stdc++.h>
using namespace std;
int main()
{
  int Zero=0,One=0;
  string S;
  cin>>S;
  for(char C: S){
    if (C=='0') {
      Zero++;
      One=0;
      if (Zero>=7) {
        cout<<"YES"<<endl;
        return 0;
      }
    }
    else{
      One++;
      Zero=0;
      if (One>=7) {
        cout<<"YES"<<endl;
        return 0;
      }
    }
  }
  cout<<"NO"<<endl;
  return 0;
}
