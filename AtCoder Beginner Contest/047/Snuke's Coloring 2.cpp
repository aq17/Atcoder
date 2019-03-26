// WA

#include <bits/stdc++.h>
using namespace std;

int main(){
  int w,h,n;
  cin >> w >> h >> n;

  for (int i = 0; i < n; i++){
    int x,y,a;
    cin >> x >> y >> a;
    
    if (a == 1) {
      w -= x;
    }else if (a == 2) {
      w = x;
    }else if (a == 3) {
      h -= y;
    }else {
      h = y;
    }
    
  }
  
  cout << w * h << endl;
}