#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  
  if(n < 15){
    cout << n * 800 << endl;
  }else{
    cout << n * 800 - (n / 15) * 200 << endl;
  }
}