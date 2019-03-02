#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int ans = 0;
  
  for(int i = 1; i<=100; i++){
    if(i % n == 0){
      continue;
    }
    ans++;
  }
  
  cout << ans << endl;
}