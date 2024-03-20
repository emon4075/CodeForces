#include<bits/stdc++.h>
using namespace std;
int main()
{
  char C;
  while (cin>>C) {
    if (C=='.') {
      cout<<0;
    }
    else if (C=='-') {
      cin>>C;
      if (C=='.') {
        cout<<1;
      }
      else{
        cout<<2;
      }
    }
  }
  return 0;
}
