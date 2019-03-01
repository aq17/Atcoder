#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  
  if(a == b){
    cout << "Draw" << endl;
  }else if((a > b || a == 1) && b != 1){
    cout << "Alice" << endl;
  }else{
    cout << "Bob" << endl;
  }
}