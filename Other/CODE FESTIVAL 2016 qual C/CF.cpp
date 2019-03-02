#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,ans="No";
  cin >> s;
  bool flg = false;
  
  for(int i = 0; i<s.size(); i++){
    if(s[i] == 'C'){
      flg = true;
    }else if(s[i] == 'F' && flg){
      ans = "Yes";
      break;
    }
  }
  
  cout << ans << endl;
}