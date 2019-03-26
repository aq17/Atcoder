#include <bits/stdc++.h>
using namespace std;

int main(){
  long long a,b,x,count=0;
  cin >> a >> b >> x;
  
  for (long long i = a; i <= b; i++){
    if (i % x == 0){
      count++;
    }
  }
  
  cout << count << endl;
}