#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int count = 1;
  bool flg = false;
  vector<int> vec(n);
  for(int i=0; i<n; i++){
    cin >> vec.at(i);
    if(i != 0){
      flg = false;
      for(int j=0; j<i; j++){
        if(vec.at(i) == vec.at(j)){
          flg = true;
        }
      }
      if(flg == false){
        count++;
      }
    }
  }
  cout << count << endl;
}