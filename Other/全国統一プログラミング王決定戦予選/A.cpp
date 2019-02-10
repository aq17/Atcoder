//Subscribers
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b;
  cin >> n >> a >> b;
  if(n > a+b){
    cout << min(a,b) << " "<< 0;
  }else{
    cout << min(a,b) << " " << a+b-n;
  }
}
