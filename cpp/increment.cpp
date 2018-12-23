#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // ここにプログラムを追記
  cout << x*(a+b) << endl;
  cout << (x*(a+b))*(x*(a+b)) << endl;
  cout << (x*(a+b))*(x*(a+b))-1 << endl;
}
