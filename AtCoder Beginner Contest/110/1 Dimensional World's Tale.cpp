#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  vector<int> xVec(n);
  vector<int> yVec(m);
  bool war = true;
  bool b1 = true;
  bool b2 = true;
  
  for (int i = 0; i < n; i++){
    cin >> xVec.at(i);
  }
  
  for (int i = 0; i < m; i++){
    cin >> yVec.at(i);
  }
  
  for (int i = x; i <= y; i++){
    for(int j = 0; j < n; j++){
      if(xVec.at(j) >= i){
        b1 = false;
      }
    }
    for(int j = 0; j < m; j++){
      if(yVec.at(j) < i){
        b2 = false;
      }
    }
    
    if(b1 && b2) {
      war = false;
      break;
    }
  }
  
  if(war){
    cout << "War" << endl;
  }else {
    cout << "No War" << endl;
  }
}