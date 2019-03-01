#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,a,b;
  cin >> x >> a >> b;
  
  if(b > a && x < (b-a)){
    cout << "dangerous" << endl;
  }else if(b > a){
    cout << "safe" << endl;
  }else{
    cout << "delicious" << endl;
  }
}