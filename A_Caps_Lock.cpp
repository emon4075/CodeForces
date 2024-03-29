#include<bits/stdc++.h>
using namespace std;
int main()
{
  char S[101];
  cin>>S;
  int Counter=0;
  for (int i = 0; i < strlen(S); i++) {
    if (isupper(S[i])) {
      Counter++;
    }
  }
  if (Counter==strlen(S)) {
    for (int i = 0; i < strlen(S); i++) {
      S[i]=(char)tolower(S[i]);
    }
    cout<<S<<endl;
  }
  else if (islower(S[0]) && Counter==(strlen(S)-1)) {
    S[0]=(char)toupper(S[0]);
    for (int i = 1; i < strlen(S); i++) {
      S[i]=(char)tolower(S[i]);
    }
    cout<<S<<endl;
  }
  else{
    cout<<S<<endl;
  }
  return 0;
}
