#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(8);
  for(int i = 0; i<8; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(),vec.end());
  cout << vec.at(7) << endl;
}