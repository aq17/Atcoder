#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a;
  string r;
  cin >> n >> a;

  if(n % 500 == 0 || n % 500 <= a){
    r = "Yes";
  }else{
    r = "No";
  }

  cout << r << endl;
}
