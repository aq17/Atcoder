#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    string s;
    cin >> n >> q >> s;
    vector<int> l(q);
    vector<int> r(q);

    for (int i = 0; i < q; i++) {
        cin >> l.at(i) >> r.at(i);
    }

    // 部分文字列ACを先に数えておく
    vector<int> ac(n,0);
    for (int i = 0; i < n-1; i++) {
        if(s[i] == 'A' && s[i + 1] == 'C') {
            ac.at(i + 1) += ac.at(i) + 1;
        }else {
            ac.at(i + 1) = ac.at(i);
        }
    }

    for (int i = 0; i < q; i++) {
        int ans = ac.at(r.at(i)-1) - ac.at(l.at(i)-1);
        cout << ans << endl;
    }
}
