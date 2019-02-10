//When I hit my pocket...
#include <bits/stdc++.h>
using namespace std;

int main(){
  long k,a,b,bis=1,p=0;
  cin >> k >> a >> b;
  for(int i=k; i>0; i--){
    if(p != 0){
      //最優先
      p--;
      bis = bis + b;
    }else if(a <= bis && i != 1){
      bis = bis - a; //交換
      p++;
    }else{
      bis++; //叩く
    }

  }
  if(k+1 > bis) bis = k+1;
  cout << bis << endl;
}
