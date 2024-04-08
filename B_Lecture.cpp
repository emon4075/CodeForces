#include<bits/stdc++.h>
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;
  cin.ignore();
  map<string, string> MP;
  while (M--) {
    string S1, S2;
    cin >> S1 >> S2;
    if (S1.size() > S2.size()) {
      MP[S1] = S2;
    }
    else {
      MP[S2] = S1;
    }
  }
  cin.ignore();
  string Lecture;
  getline(cin,Lecture);
  stringstream SS(Lecture);
  string Word;
  while (SS >> Word) {
    if (MP.find(Word) != MP.end()) {
      cout << MP[Word] << " ";
    }
    else {
      cout << Word << " ";
    }
  }
  cout<<endl;
  return 0;
}
