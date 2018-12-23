#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  string r;
  cin >> a >> b;

  if(a*b % 2 == 0)
    r = "Even";
  else
    r = "Odd";

  cout << r << endl;
}
