//Streamline
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;

  vector<int> vec(m);
  vector<int> sub(m-1);

  int pickNum;

  int answer = 0;

  if(m - n >= 0){
    pickNum = m - n;
  }else{
    pickNum = 0;
  }

  for(int i = 0; i<m; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(),vec.end());
  reverse(vec.begin(),vec.end());

  for(int i = 0; i<m-1; i++){
    sub.at(i) = vec.at(i) - vec.at(i+1);
  }
  sort(sub.begin(),sub.end());

  for(int i = 0; i < pickNum; i++){
    answer += sub.at(i);
  }

  cout << answer << endl;
  return 0;
}
