//Path
#include <bits/stdc++.h>
using namespace std;

int main(){
  int a=0,x,c1=0,c2=0,c3=0,c4=0;
  string ans = "NO";
  for(int i = 0; i < 6; i++){
    cin >> x;
    if(x == 1){
      c1++;
    }else if(x == 2){
      c2++;
    }else if(x == 3){
      c3++;
    }else{
      c4++;
    }
  }
  if(c1 == 2){
    a++;
  }
  if(c2 == 2){
    a++;
  }
  if(c3 == 2){
    a++;
  }
  if(c4 == 2){
    a++;
  }
  if(a == 2){
    ans = "YES";
  }
  cout << ans << endl;
}
