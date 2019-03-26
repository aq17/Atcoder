#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int ans = 0;
  cin >> s;
  
  for (int i = 0; i < s.length() - 2; i++) {
    int n1 = s[i] - '0';
    int n2 = s[i+1] - '0';
    int n3 = s[i+2] - '0';
    int num = n1 * 100 + n2 * 10 + n3;
    
    if (753-ans > 753-num) {
      ans = num;
    }
  }
  
  cout << ans << endl;
}