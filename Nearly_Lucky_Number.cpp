#include<bits/stdc++.h>
using namespace std;
int main(){
  string S;
  cin>> S;
  long Lucky_Digits=0;
  for(char C: S){
    if (C=='4' || C=='7') {
      Lucky_Digits++;
    }
  }
  bool Flag = false;
  while (Lucky_Digits!=0) {
    int Num = Lucky_Digits%10;
    Lucky_Digits=Lucky_Digits/10;
    if (Num==7 || Num==4) {
      Flag=true;
    }
    else{
      Flag=false;
      break;
    }
  }
  if (Flag) {
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}
