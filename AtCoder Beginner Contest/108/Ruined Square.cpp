#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  int h = c - a;
  int w = d - b;
  cout << c + w << " " << d + h << " " << c + w - h << " " << d + h - w << endl;
}