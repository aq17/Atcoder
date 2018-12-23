#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,i,j,p,r;
  cin >> n;

  for(j=0; j<n; j++){
    p = 0;
    cin >> a;
    for(i=0; a%2==0; i+=0){
      a /= 2;
      p++;
    }
    if(r>p || j==0)
      r = p;
  }

  cout << r << endl;
}
