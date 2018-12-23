#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,r;
  cin >> n >> a >> b;

  if(n*a >= b)
    r = b;
  else
    r = n*a;

  cout << r << endl;
}
