#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  bool b = true;

  for(int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  int c = 0;

  for(int i = 0; i < n; i++) {
    b = true;
    while(b) {
      if (a.at(i) % 2 == 0) {
        a.at(i) /= 2;
        c++;
      }else {
        b = false;
      }
    }
  }

  cout << c << endl;
}
