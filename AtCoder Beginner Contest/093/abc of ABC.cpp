#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,ans="No";
  cin >> s;
  
  if(s[0] == 'a' || s[1] == 'a' || s[2] == 'a'){
    if(s[0] == 'b' || s[1] == 'b' || s[2] == 'b'){
      if(s[0] == 'c' || s[1] == 'c' || s[2] == 'c'){
        ans = "Yes";
      }
    }
  }
  
  cout << ans << endl;
}