#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  
  int size = s.size();
  int use_size = size - 8;
  
  string ans = "";
  for(int i = 0; i < use_size; i++){
    ans += s[i];
  }
  
  cout << ans << endl;
}