#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<string> word(n);
  bool flg = true;
  
  for (int i = 0; i < n; i++){
    cin >> word.at(i);
  }
  
  for (int i = 1; i < n; i++){
    if (word.at(i-1)[word.at(i-1).length()-1] != word.at(i)[0]){
      flg = false;
    }
    
    for (int j = 0; j < i; j++){
      if(word.at(j) == word.at(i)){
        flg = false;
      }
    }
    
    if (!flg) {
      break;
    }
  }
  
  if(flg){
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }
}