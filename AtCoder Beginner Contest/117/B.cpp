//Polygon
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,max=0,sum=0,input;
  cin >> n;
  for(int i = 0; i<n; i++){
    cin >> input;
    if(max <= input) max = input;
    sum += input;
  }
  if(max < sum-max){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
