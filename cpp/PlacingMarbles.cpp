#include <bits/stdc++.h>
using namespace std;

int main(){
  int s,p=0;
  cin >> s;
  if(s%100 == 1){
    p++;
  }
  if((s/10)%10 == 1){
    p++;
  }
  if(s/100 == 1){
    p++;
  }
  cout << p << endl;
}
