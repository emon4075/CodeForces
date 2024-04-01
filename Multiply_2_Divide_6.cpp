#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while (T--) {
    int N;
    cin>>N;
    int Count_2=0,Count_3=0;
    while (N%2==0) {
      Count_2++;
      N/=2;
    }
    while (N%3==0) {
      Count_3++;
      N/=3;
    }
    if (N!=1 || Count_2>Count_3) {
      cout<<-1<<endl;
    }
    else{
      cout<<Count_3-Count_2+Count_3<<endl;
    }
  }
  return 0;
}
