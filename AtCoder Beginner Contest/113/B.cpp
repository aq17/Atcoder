#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,t,a,h,ansV=-1,ans;
  cin >> n >> t >> a;
  for(int i = 0; i<n; i++){
    cin >> h;
    int temp = t - h * 0.006;
    if(a - ansV > a - temp){
      ansV = temp;
      ans = i+1;
    }
  }
  cout << ans << endl;
}
