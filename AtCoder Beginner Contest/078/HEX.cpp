#include <bits/stdc++.h>
using namespace std;

int main(){
  char a,b;
  int a2,b2;
  cin >> a >> b;
  
  switch(a){
    case 'A':
      a2 = 10;
      break;
    case 'B':
      a2 = 11;
      break;
    case 'C':
      a2 = 12;
      break;
    case 'D':
      a2 = 13;
      break;
    case 'E':
      a2 = 14;
      break;
    case 'F':
      a2 = 15;
  }
  
  switch(b){
    case 'A':
      b2 = 10;
      break;
    case 'B':
      b2 = 11;
      break;
    case 'C':
      b2 = 12;
      break;
    case 'D':
      b2 = 13;
      break;
    case 'E':
      b2 = 14;
      break;
    case 'F':
      b2 = 15;
  }
  
  if(a2 > b2){
    cout << '>' << endl;
  }else if(a2 == b2){
    cout << '=' << endl;
  }else{
    cout << '<' << endl;
  }
}