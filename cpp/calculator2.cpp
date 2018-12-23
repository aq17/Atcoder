#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,i;
  string op;
  cin >> n >> a;

  for(i=0; i < n; i++){
    cin >> op >> b;
    if(op == "+"){
      a += b;
    }else if(op == "-"){
      a -= b;
    }else if(op == "*"){
      a *= b;
    }else if(op == "/"){
      if(b == 0){
        i = n+1;
        cout << "error" << endl;
        break;
      }
      a /= b;
    }
    cout << i+1 << ":" << a << endl;
  }
}
