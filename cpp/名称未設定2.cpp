#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j,s1=0,s2=0;
  cin >> n;
  int a[n];

  //ここまで1ms
  for(i=0; i<n; i++){
    cin >> a[i];
  }

  for(j=0; j<=n; j++){
    s1 = 0;
    s2 = 0;


    if(j == 0 || j == n){
      for(i=0; i<n; i++){
        s1 += a[i];
      }
    }else{
      for(i=j; i<n; i++){
        s1 += a[i];
      }

      for(i=j; i>=0; i--){
        s2 += a[i];
      }
    }

    if(s1 >= s2){
      cout << s1 << endl;
    }else{
      cout << s2 << endl;
    }
  }
}
