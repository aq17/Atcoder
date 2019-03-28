#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  // bool flg = false;
  cin >> n;
  // 
  // for (int i = 0; i <= ((11/7)+1); i++){
  //   int code = 4 * i + 7 * (i - (11/7)+1);
  //   if (code == n){
  //     flg = true;
  //     break;
  //   }
  // }
  if (n == 1 || n == 2 || n == 3 || n == 5 || n == 6 || n == 9 || n == 10 || n == 13 || n == 17) {
    cout << "No" << endl;
  }else {
    cout << "Yes" << endl;
  }
  // 
  // if(flg){
  //   cout << "Yes" << endl;
  // }else {
  //   cout << "No" << endl;
  // }
}