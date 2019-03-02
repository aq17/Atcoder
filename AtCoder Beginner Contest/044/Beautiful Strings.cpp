#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,ans="Yes";
  cin >> s;
  

  for(int i = 0; i<s.size(); i++){
    int count = 0;
    for(int j = 0; j<s.size(); j++){
      if(s[i] == s[j]){
        count++; // i文字目と同じかどうかアクセス
      }
    }
    if(count % 2 == 1){
      ans = "No";
      break;
    }
  }
  
  cout << ans << endl;
}