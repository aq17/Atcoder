#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int size = s.length(), count = 0;
  bool flg1 = false, flg2 = false;
  
  for (int i = 0; i < size; i++){
    if(s[0] == 'A'){
      if(s[i] == 'C' && s[size-1] != 'C' && s[0] != 'C' && s[1] != 'C'){
        flg1 = true;
      }
      if(islower(s[i])){
        count++;
      }
    }
  }
  
  if (count == (size-2)){
    flg2 = true;
  }
  
  if(flg1 && flg2){
    cout << "AC" << endl;
  }else {
    cout << "WA" << endl;
  }
}