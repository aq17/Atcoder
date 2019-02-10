//Touitsu
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,count,sum=0;
  string a,b,c;
  cin >> n >> a >> b >> c;
  for(int i=0; i<n; i++){
    count = 2;
    if(a[i] == b[i]){
      count--;
    }
    if(b[i] == c[i]){
      count--;
    }
    if(c[i] == a[i] && count!=0){
      count--;
    }
    sum += count;
  }
  cout << sum << endl;
}
