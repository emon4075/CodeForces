#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while (T--) {
    char C[8][8];
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        cin>>C[i][j];
      }
    }
    bool Is_It_Red=false;
    for (int i = 0; i < 8; i++) {
      int Red_Checker=0;
      for (int j = 0; j < 8; j++) {
        if (C[i][j]=='R') {
          Red_Checker++;
        }
      }
      if (Red_Checker==8) {
        Is_It_Red=true;
      }
    }
    if (Is_It_Red) {
      cout<<"R"<<endl;
    }
    else{
      cout<<"B"<<endl;
    }
  }
  return 0;
}
