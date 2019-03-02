#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int base = 700;
  cin >> s;
  
  if(s[0] == 'o'){
    base += 100;
  }
  if(s[1] == 'o'){
    base += 100;
  }
  if(s[2] == 'o'){
    base += 100;
  }
  
  cout << base << endl;
}