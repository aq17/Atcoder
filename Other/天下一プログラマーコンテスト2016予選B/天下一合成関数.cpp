#include <bits/stdc++.h>
using namespace std;

double fun(double n){
  return floor((n*n + 4.0)/8.0);
}

int main(){
  cout << fun(fun(fun(20))) << endl;
}