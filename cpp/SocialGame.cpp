#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,i=1;
  cin >> a >> b >> c;
  while (c > 0) {
    c -= a;
    if(i%7==0) c -= b;
    i++;
  }
  cout << i-1 << endl;
}
