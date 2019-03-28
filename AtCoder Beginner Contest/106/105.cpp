#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, count = 0, answer = 0;
  cin >> n;
  
  for (int i = 1; i <= n; i += 2) {
    count = 0;
    for (int j = 1; j <= i; j++){
      if (i % j == 0){
        count++;
      }
    }
    if (count == 8) {
      answer++;
    }
  }
  
  cout << answer << endl;
}