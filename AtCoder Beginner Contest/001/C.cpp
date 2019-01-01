#include <bits/stdc++.h>
using namespace std;

int main(){
  int De,c=0,v;
  double Di;
  cin >> De >> Di;
  string r;
  double a = De / 10,p = 11.25,q = 33.75,s= round(Di/60*10)/10;

  while(c <= 15){
    if((a >= p && a < q) || c==15){
      break;
    }
    p += 22.5;
    q += 22.5;
    c++;
  }

  switch(c){
    case 0:
      r = "NNE";
      break;
    case 1:
      r = "NE";
      break;
    case 2:
      r = "ENE";
      break;
    case 3:
      r = "E";
      break;
    case 4:
      r = "ESE";
      break;
    case 5:
      r = "SE";
      break;
    case 6:
      r = "SSE";
      break;
    case 7:
      r = "S";
      break;
    case 8:
      r = "SSW";
      break;
    case 9:
      r = "SW";
      break;
    case 10:
      r = "WSW";
      break;
    case 11:
      r = "W";
      break;
    case 12:
      r = "WNW";
      break;
    case 13:
      r = "NW";
      break;
    case 14:
      r = "NNW";
      break;
    case 15:
      r = "N";
      break;
  }

  if(s >= 0.0 && s <= 0.2){
    v = 0;
    r = "C";
  }else if(s >= 0.3 && s <= 1.5) v = 1;
  else if(s >= 1.6 && s <= 3.3) v = 2;
  else if(s >= 3.4 && s <= 5.4) v = 3;
  else if(s >= 5.5 && s <= 7.9) v = 4;
  else if(s >= 8.0 && s <= 10.7) v = 5;
  else if(s >= 10.8 && s <= 13.8) v = 6;
  else if(s >= 13.9 && s <= 17.1) v = 7;
  else if(s >= 17.2 && s <= 20.7) v = 8;
  else if(s >= 20.8 && s <= 24.4) v = 9;
  else if(s >= 24.5 && s <= 28.4) v = 10;
  else if(s >= 28.5 && s <= 32.6) v = 11;
  else v = 12;

  cout << r << " " << v << endl;
}
