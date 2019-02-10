//Anti-Adjacency
#include <bits/stdc++.h>
using namespace std;

int main(){
  string answer = "NO";
  double n,k;
  cin >> n >> k;
  double x = ceil(n / 2);
  if(k <= x){
    answer = "YES";
  }
  cout << answer << endl;
}
