#include <bits/stdc++.h>
using namespace std;

int main(){
  int y,m,d;
  cin >> y >> m >> d;
  if(m == 12 && d == 25){
    y = 2018 - y;
    cout << y << endl;
  }else{
    cout << "NOT CHRISTMAS DAY" << endl;
  }
}
