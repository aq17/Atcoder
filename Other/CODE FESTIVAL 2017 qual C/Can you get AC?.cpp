#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  string ans = "No";
  bool flg = false;
  int flgCode = 1000;
  
  for(int i = 0; i<s.size(); i++){
    if(s[i] == 'A'){
      flg = true;
      flgCode = i;
    }
    if(flgCode && i == flgCode + 2){
      flg = false;
    }
    if(s[i] == 'C'){
      ans = "Yes";
      break;
    }
  }
  
  cout << ans << endl;
}