#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
  int m;
  string a;
  cin >> m;

  if(m < 100) a = "00";
  else if(m >= 100 && m <= 5000){
    if(m / 100 < 10) a = "0" + to_string(m/100);
    else a = to_string(m/100);
  }else if(m >= 6000 && m <= 30000) a = to_string(m/1000+50);
  else if(m>= 35000 && m <= 70000) a = to_string((m/1000-30)/5+80);
  else if(m>70000) a = "89";

  cout << a << endl;
}
