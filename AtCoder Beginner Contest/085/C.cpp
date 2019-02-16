#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,y,m10000=0,m5000=0,m1000=0;
  cin >> n >> y;
  int co_n = n,co_y = y;
  
  while(co_y >= 10000 && co_n != 0){
    co_y -= 10000;
    m10000++;
    co_n--;
  }
  while (co_y >= 5000 && co_n != 0) {
    co_y -= 5000;
    m5000++;
    co_n--;
  }
  while (co_y >= 1000 && co_n != 0) {
    co_y -= 1000;
    m1000++;
    co_n--;
  }
  
  while(m10000 + m5000 + m1000 == n){
    if(count%3 == 0){
      m10000 -= 1;
      m1000 += 10;
    }else if(count%3 == 1){
      m5000 -= 1;
      m1000 += 5;
    }else{
      m10000 -= 1;
      m5000 += 2;
    }
  }
  if(y == 0){
    cout << m10000 << " " << m5000 << " " << m1000 << endl;
  }else{
    cout << "-1 -1 -1" << endl;
  }
}