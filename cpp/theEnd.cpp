#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i,a,s=0,p=0;
  cin >> n;
  for(i = 0; i<n; i++){
    s++;
    cin >> a;
    s += a-1;
    if(s <= 2018){
      p++;
    }
  }
  cout << p << endl;
}
