#include <bits/stdc++.h>
using namespace std;

int main(){
  int b,i,p;
  double j;
  cin >> b;
  for(i=2; i<b; i++){
    j = i;
    while(j <= b){
      j = floor(j * 1.5);
      if(j == b){
        p++;
      }
    }
  }
  cout << p << endl;
}
