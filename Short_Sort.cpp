#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while (T--) {
    char S[10],Text[10]="abc";
    cin>>S;
    int Count=0;
    for (int i = 0; i < 3; i++) {
      if (S[i]!=Text[i]) {
        Count++;
      }
    }
    if (Count<=2) {
      cout<<"YES"<<endl;
    }
    else {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
