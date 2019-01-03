#include <bits/stdc++.h>
using namespace std;

int main(){
  int a;
  string r;
  cin >> a;

  if(a == 25)
    r = "Christmas";
  else if(a == 24)
    r = "Christmas Eve";
  else if(a == 23)
    r = "Christmas Eve Eve";
  else if(a == 22)
    r = "Christmas Eve Eve Eve";

  cout << r << endl;
}

// こっちの方がうまくかけたと思う
// #include <bits/stdc++.h>
// using namespace std;
//
// int main(){
//   int a;
//   string r;
//   cin >> a;
//
//   while(a < 25){
//     r += " Eve";
//     a++;
//   }
//   cout << "Christmas" << r << endl;
// }
