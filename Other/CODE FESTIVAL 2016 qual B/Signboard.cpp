#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  string right = "CODEFESTIVAL2016";
  int count = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] != right[i]){
      count++;
    }
  }
  cout << count << endl;
}