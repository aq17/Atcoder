#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,t;
  cin >> n >> t;
  
  long sta = 10000000;
  
  for (int i = 0; i < n; i++){
    int c,d;
    cin >> c >> d;
    
    if (d <= t) {
      if (sta > c) {
        sta = c;
      }
    }
  }
  
  if (sta == 10000000){
    cout << "TLE" << endl;
  }else {
    cout << sta << endl;
  }
}