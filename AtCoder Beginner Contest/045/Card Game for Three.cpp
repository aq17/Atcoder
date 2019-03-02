#include <bits/stdc++.h>
using namespace std;

string a,b,c;
int a_index = 0 , b_index = 0 , c_index = 0; //ABCの先頭カード
int turn = 0; //0 > A , 1 > b , 2 > c
bool is_break = false;
int winner = 0;

void turn_a(){
  if(a_index > a.size()-1){
    is_break = true;
    winner = 0;
    return;
  }
  
  if(a[a_index] == 'a'){
    turn = 0;
  }else if(a[a_index] == 'b'){
    turn = 1;
  }else if(a[a_index] == 'c'){
    turn = 2;
  }
  a_index++;
}

void turn_b(){
  if(b_index > b.size()-1){
    is_break = true;
    winner = 1;
    return;
  }
  
  if(b[b_index] == 'a'){
    turn = 0;
  }else if(b[b_index] == 'b'){
    turn = 1;
  }else if(b[b_index] == 'c'){
    turn = 2;
  }
  b_index++;
}

void turn_c(){
  if(c_index > c.size()-1){
    is_break = true;
    winner = 2;
    return;
  }
  
  if(c[c_index] == 'a'){
    turn = 0;
  }else if(c[c_index] == 'b'){
    turn = 1;
  }else if(c[c_index] == 'c'){
    turn = 2;
  }
  c_index++;
}

int main(){  
  cin >> a >> b >> c;

  while(true){
      if(turn == 0){
        turn_a();
      }else if(turn == 1){
        turn_b();
      }else{
        turn_c();
      }
      
      if(is_break){
        break;
      }
  }
  
  if(winner == 0){
    cout << "A" << endl;
  }else if(winner == 1){
    cout << "B" << endl;
  }else{
    cout << "C" << endl;
  }
  
}