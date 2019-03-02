#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  int i = a;
  while(true){
    if(i % b == 0){
      break;
    } 
    i--;
  }
  
  cout << i << endl;
}