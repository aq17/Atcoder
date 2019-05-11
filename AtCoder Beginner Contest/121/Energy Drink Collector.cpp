#include <bits/stdc++.h>
using namespace std;

int main() {
  long n,m;
  cin >> n >> m;
  vector<vector<long>> vec(n,vector<long>(2));

  for(long i = 0; i < n; i++) {
    cin >> vec.at(i).at(0) >> vec.at(i).at(1);
  }

  sort(vec.begin(),vec.end());

  long j = 0;
  long sum = 0;
  for(long i = 0; i < m; i++) {
    if(vec.at(j).at(1) == 0) {
      j++;
    }

    vec.at(j).at(1)--;
    sum += vec.at(j).at(0);
  }

  cout << sum << endl;
}
