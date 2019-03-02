#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,s;
  cin >> a >> b >> c >> s;
  if(a + b + c + 3 >= s && a + b + c <= s){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}