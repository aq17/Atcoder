#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> n(3);
  cin >> n.at(0) >> n.at(1) >> n.at(2);
  sort(n.begin(),n.end());
  cout << n.at(2) - n.at(0) << endl;
}