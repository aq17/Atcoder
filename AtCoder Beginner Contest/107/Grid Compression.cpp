#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  bool isWhite = false;
  int isWCnt = 0;
  cin >> h >> w;
  vector<string> vec(h);
  
  for (int i = 0; i < h; i++){
    cin >> vec.at(i);
  }
  
  vector<bool> DotLine(w,false);
  vector<int> LineCnt(w);
  for (int i = 0; i < h; i++){
    isWhite = false;
    isWCnt = 0;
    
    for (int j = 0; j < w; j++){
      if(vec.at(i)[j] == '.' && isWCnt == 0){
        isWhite = true;        
      }else if (vec.at(i)[j] == '.' && LineCnt.at(j) == 0){
        DotLine.at(j) = true;
      }else if(vec.at(i)[j] != '.'){
        isWhite = false;
        DotLine.at(j) = false;
      }
      
      if(i == h - 1 && DotLine.at(j)){
      	for(int k = 0; k < w; k++){
          if(DotLine.at(k)){
            for (int l = 0; l < h; l++){
      		    vec.at(l)[k] = 'd';
            }
          }
        }
      }
  
      if(j == w - 1 && isWhite){
        for (int k = 0; k < w; k++){
          vec.at(i)[k] = 'd';
        }
      }  
      
      isWCnt++;
      LineCnt.at(j)++;
      
    }
  }
  
  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      if (j == w - 1){
        cout << vec.at(i)[j] << endl;
      }else {
        cout << vec.at(i)[j];
      }      
    }
  }
}