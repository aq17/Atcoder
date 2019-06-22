#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h.at(i);
    }

    bool flg = false;
    bool ok = true;
    bool all = true;
    int count = 0;

    while(true) {
        ok = true;
        all = true;
        for (int i = 0; i < n; i++) {
            if (h.at(i) == 0) {
                all = false;
            }
            if (h.at(i) > 0) {
                h.at(i)--;
                flg = true;
            }else if (flg){
                count++;
                flg = false;
            }

            if (h.at(i) != 0) {
                ok = false;
            }
        }

        if (all) {
            count++;
        }

        if (ok) {
            break;
        }
    }

    cout << count << endl;
}
