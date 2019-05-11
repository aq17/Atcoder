#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b){
  if (a > b){
    a = b;
    return true;
  }
  return false;
}

template<class T> inline bool chmax(T& a, T b){
  if (a < b){
    a = b;
    return true;
  }
  return false;
}

int main() {
  // 無限大
  const long long INF = 1LL << 60;

  // DPテーブル
  long long dp[100010];
  long long h[100010];

  // 初期化
  for (int i = 0; i < 100010; ++i) dp[i] = INF;

  // 初期条件
  dp[0] = 0;
  
  // 入力受け取り
  int n;
  cin >> n;
  
  for (int i = 0; i < n; ++i) cin >> h[i];
  
  for (int i = 0; i < n; i++){
    chmin(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
    if (i > 1) chmin(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
  }
  
  cout << dp[n-1] << endl;
}