#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,a,b; cin >> x >> a >> b;
  int afterCake = x - a;
  while(afterCake >= b){
    afterCake -= b;
  }
  cout << afterCake << endl;
}