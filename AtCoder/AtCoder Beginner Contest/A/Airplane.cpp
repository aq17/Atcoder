#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v(3);
  cin >> v[0] >> v[1] >> v[2];
  sort(v.begin(),v.end());

  cout << v[0] + v[1] << endl;
}

// 1WA 02:44:03 最悪
