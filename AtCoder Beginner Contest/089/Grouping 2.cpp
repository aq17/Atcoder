#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,c=0; cin >> n;
  while(n >= 3){
    n -= 3;
    c++;
  }
  cout << c << endl;
  return 0;
}