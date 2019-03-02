#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  
  vector<int> v(3);
  v.at(0) = a+b;
  v.at(1) = a-b;
  v.at(2) = a*b;
  sort(v.begin(),v.end());
  
  cout << v.at(2) << endl;
}