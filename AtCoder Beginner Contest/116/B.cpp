//Collatz Problem
#include <bits/stdc++.h>
using namespace std;
int main(){
  int s,i=0,x;
  cin >> s;
  bool flg = true;
  vector<int> vec(0);
  while(flg){
    vec.push_back(s);
    if(s % 2 == 0){
      s /= 2;
    }else{
      s = s*3+1;
    }
    x = vec.size();
    for(int j=0; j<x; j++){
      if(vec.at(j) == s){
        flg = false;
      }
    }
    i++;
  }
  cout << i+1 << endl;
}
