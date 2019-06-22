#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if (a % b== 0){
        return(b);
    }else {
		return(gcd(b,a%b));
    }
}

int main(){
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a.at(i);
    }

    sort(a.begin(),a.end());

    for (int i = 1; i < N; i++) {
        a.at(i) = gcd(a.at(i - 1), a.at(i));
    }

    cout << a.at(N - 1) << endl;
}
