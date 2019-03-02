#include <bits/stdc++.h>
using namespace std;

#define out(n) cout << n << endl

int main(){
  string s;
  string ans = "TBD";
  cin >> s;

  if(s[5] == '0'){
    if(s[6] == '1' || s[6] == '2' || s[6] == '3'){
      ans = "Heisei";
    }else if(s[6] == '4'){
      if(s[8] != '3'){
        ans = "Heisei";
      }else if(s[9] == '0'){
        ans = "Heisei";
      }
    }
  }
  out(ans); // 出力
}
