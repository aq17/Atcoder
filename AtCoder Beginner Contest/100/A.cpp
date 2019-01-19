#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  string answer = "Yay!";
  cin >> a >> b;
  if(a > 8 || b > 8) answer = ":(";
  cout << answer << endl;
  return 0;
} 
