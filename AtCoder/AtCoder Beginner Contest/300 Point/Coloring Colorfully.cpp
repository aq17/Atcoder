#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a1=0,a2=0;

    for (int i = 0; i < s.size(); i++) {
        if(i % 2 == 0) {
            if(s[i] == '1') {
                a1++;
            }else {
                a2++;
            }
        }else {
            if(s[i] == '1') {
                a2++;
            }else {
                a1++;
            }
        }
    }

    cout << min(a1,a2) << endl;
}
