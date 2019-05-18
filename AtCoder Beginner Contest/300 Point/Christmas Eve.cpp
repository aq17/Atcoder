#include <bits/stdc++.h>
using namespace std;

int main() {
    long n,k;
    cin >> n >> k;
    vector<long> h(n);

    for (long i = 0; i < n; i++) {
        cin >> h.at(i);
    }

    sort(h.begin(),h.end());

    int res = h.at(k-1) - h.at(0);

    for (long i = 1; i <= n - k; i++) {
        if(res > h.at(i+k-1) - h.at(i)){
            res = h.at(i+k-1) - h.at(i);
        }
    }

    cout << res << endl;
}
