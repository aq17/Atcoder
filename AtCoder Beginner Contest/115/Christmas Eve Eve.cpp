#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,p,i,h=0,s=0;
  cin >> n;

  for(i=0; i<n; i++){
    cin >> p;
    if(p > h)
      h = p;
    s += p;
  }

  cout << s-h/2 << endl;
}
