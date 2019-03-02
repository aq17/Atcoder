#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y;
  cin >> x >> y;
  
  if(x%y==0){
    cout << -1 << endl;
  }else{
    int a = 0;
    while(true){
      a += x;
      if(a % y != 0){
        break;
      }
    }
    cout << a << endl;
  }
}