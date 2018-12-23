#include <bits/stdc++.h>
using namespace std;

int main(){
  int f,p,n;
  string t;
  cin >> f;
  if(f==2){
    cin >> t;
  }
  cin >> p >> n;
  if(f==2){
    cout << t << "!" << endl;
  }
  cout << p*n << endl;
}
