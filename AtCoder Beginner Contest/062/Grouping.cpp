#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y;
  cin >> x >> y;
  
  if(x == 2 || y == 2){
    cout << "No" << endl;
  }else if(
    ((x == 4) || (x == 6) || (x == 9) || (x == 11)) && 
    ((y == 4) ||(y == 6) || (y == 9) || (y == 11))
  ){
    cout << "Yes" << endl;
  }else if(
    ((x == 1) || (x == 3) || (x == 5) || (x == 7) || (x == 8) || (x == 10) || (x == 12)) && 
    ((y == 1) ||(y == 3) || (y == 5) || (y == 7) || (y == 8) || (y == 10) || (y == 12))
  ){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}

/*

想定解法

int main () {
int a [] = {0 , 1 , 3 , 1 , 2 , 1 , 2 , 1 , 1 , 2 , 1 , 2 , 1};
// 配列の添字は 0 から始まるので，a [0] は 0 にしている．
int x , y ; cin >> x >> y ;
cout << ( a [ x ] == a [ y ] ? " Yes " : " No ") << endl ;
}
*/