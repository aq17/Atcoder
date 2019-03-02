#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  
  if((abs(b - a) <= d && abs(c - b) <= d) || abs(c-a) <= d){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}