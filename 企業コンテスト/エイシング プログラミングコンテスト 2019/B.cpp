//Contents
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,i,p,q1=0,q2=0,q3=0,ans;
  cin >> n >> a >> b;
  for(i=0; i<n; i++){
    cin >> p;
    if(p <= a){
      q1++;
    }else if(p >= a+1 && p <= b){
      q2++;
    }else{
      q3++;
    }
  }
  ans = min({q1,q2,q3});
  cout << ans << endl;
}
