#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  string ans1 = "";
  int ans2 = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      string s;
      cin >> s;
      if (s == "snuke") {
        ans1 = 'A' + j;
        ans2 = i + 1;
      }
    }
  }
  cout << ans1 << ans2 << endl;
}