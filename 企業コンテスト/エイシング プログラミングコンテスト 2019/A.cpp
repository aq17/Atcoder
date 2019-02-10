//Bulletin Board
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,h,w,a1,a2;
  cin >> n >> h >> w;
  a1 = n - h + 1;
  a2 = n - w + 1;
  cout << a1 * a2 << endl;
}
