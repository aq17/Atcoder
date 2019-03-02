#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d;
  string r;
  cin >> a >> b >> c >> d;
  if(a+b > c+d)
    r = "Left";
  else if(a+b == c+d)
    r = "Balanced";
  else
    r = "Right";

  cout << r << endl;
}
