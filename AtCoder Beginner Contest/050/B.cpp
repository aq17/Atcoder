#include <bits/stdc++.h>
using namespace std;

//未AC


int main(){
  int n,i,j,m,p,x,sum;
  cin >> n;
  int t[n];
  for(i=0; i<n; i++){
    cin >> t[i];
  }
  cin >> m;
  for(i=0; i<m; i++){
    sum = 0;
    cin >> p >> x;
    for(j=0; j<n; j++){
      if(i == p){
        sum += x;
      }else{
        sum += t[i];

      }
    }
    cout << sum << endl;
  }

}
