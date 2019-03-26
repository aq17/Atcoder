#include <bits/stdc++.h>
using namespace std;

int main(){
  double n,t,a;
  cin >> n >> t >> a;
  double ans = 1000000.0;
  int ans2;
  
  for (int i = 0; i < n; i++) {
    double h;
    cin >> h;
    double num = t - h * 0.006;
    
    if (abs(a-num) < abs(a-ans)) {
      ans = num;
      ans2 = i+1;
    }
  }
  
  cout << ans2 << endl;
}
