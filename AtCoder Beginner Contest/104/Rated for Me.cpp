#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  
  if(n >= 2800){
    cout << "AGC" << endl;
  }else if(n >= 1200){
    cout << "ARC" << endl;
  }else{
    cout << "ABC" << endl;
  }
}