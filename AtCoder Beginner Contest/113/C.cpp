#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  vector<int> year(m);
  vector<int> place(m);
  vector<string> answer(m);
  for(int i=0; i<m; i++){
    cin >> place.at(i) >> year.at(i);
  }
  for(int i=0; i<m; i++){
    answer.at(i) += "000000" + to_string(place.at(i));
    int size = answer.at(i).length - 6;
    answer.at(i).substr(size);
  }
  for(int i=0; i<m; i++){
    cout << answer.at(i) << endl;
  }
}
