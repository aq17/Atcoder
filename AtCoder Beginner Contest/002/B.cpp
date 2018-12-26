#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i,l;
  string s;
  cin >> s;
  l = s.length();

  for(i=0; i<l; i++){
    n = 0;
    while(n==0){
      s.find("a");
      s.find("i");
      s.find("u");
      s.find("e");
      s.find("o");
    }
    s.replace(n,1,"");
  }

  cout << s << endl;
}
