#include <bits/stdc++.h>
using namespace std;

int main(){
  int ans = 0;
  for(int i = 1; i<101; i++){
    if(i % 3 == 0 || i % 5 == 0){
      continue;
    }
    ans += i;
  }
  cout << ans << endl;
}