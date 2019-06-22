#include <bits/stdc++.h>
using namespace std;

int main() {
    long n,m;
    cin >> n >> m;
    vector<vector<long>> v(n,vector<long>(2));

    for (long i = 0; i < n; i++) {
        for (long j = 0; j < 2; j++) {
            cin >> v.at(i).at(j);
        }
    }

    sort(v.begin(),v.end());

    long sum = 0;
    long j = 0;

    for (long i = 0; i < m; i++) {
        if (v.at(j).at(1) == 0){
            j++;
        }
        sum += v.at(j).at(0);
        v.at(j).at(1)--;
    }

    cout << sum << endl;
}
