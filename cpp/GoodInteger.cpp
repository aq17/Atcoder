#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,c,d;
  string r;
  cin >> n;
  a = n/1000;
  b = (n/100)%10;
  c = (n/10)%10;
  d = n%10;

  if(a==b && b==c)
    r = "Yes";
  else if(b==c && c==d)
    r = "Yes";
  else
    r = "No";

  cout << r << endl;
}
