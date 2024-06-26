#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while (T--) {
    int N;
    cin>>N;
    // cin.ignore();
    string S,New="";
    cin>>S;
    for (int i = 1; i < S.length(); ) {
      if (S[i]=='a'||S[i]=='e') {
        if (S[i-1]=='b'||S[i-1]=='c'||S[i-1]=='d') {
            if (!S[i+1]) {
            New=New+S[i-1]+S[i];
            break;
            }
            else{
            if (S[i+2] && (S[i+2]=='a' || S[i+2]=='e')) {
            New=New+S[i-1]+S[i]+'.';
            i+=2;
            }
            else if(S[i+2]){
            New=New+S[i-1]+S[i]+S[i+1]+'.';
            i+=3;
            }
            else if(S[i+1]){
            New=New+S[i-1]+S[i]+S[i+1];
            break;
            }
            else{
            New=S[i-1]+S[i];
            break;
            }
            }
        }
      }
    }
    cout<<New<<endl;
  }
  return 0;
}
