#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b;
  cin >> n >> a >> b;
  
  if(n > a+b){
    cout << "0" << endl;
  }else{
    cout << a+b-n << endl;
  }
}