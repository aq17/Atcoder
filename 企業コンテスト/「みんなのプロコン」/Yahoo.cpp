#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  
  int cY=0,cA=0,cH=0,cO=0;
  
  for(int i = 0; i<5; i++){
    if(s[i] == 'y'){
      cY++;
    }else if(s[i] == 'a'){
      cA++;
    }else if(s[i] == 'h'){
      cH++;
    }else if(s[i] == 'o'){
      cO++;
    }
  }
  
  if(cY == 1 && cA == 1 && cH == 1 && cO == 2){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}